/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:41:03 by lsauvage          #+#    #+#             */
/*   Updated: 2018/09/20 15:14:03 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./libft.h"

static int	gnl_write(t_list **l, char **line, int res)
{
	char	*str;
	t_list	*tmp;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (*l && i != -1 && !(j = 0))
	{
		str = (char *)(*l)->content;
		while (str[j] && str[j] != '\n')
			(*line)[i++] = str[j++];
		if (str[j] == '\n')
			i = -1;
		tmp = *l;
		*l = (*l)->next;
		free(tmp->content);
		free(tmp);
		k++;
	}
	return (res);
}

static int	gnl_read(t_list **list, int fd, size_t len, t_buff *buff)
{
	int		ret;
	t_list	*tmp;
	size_t	i;
	size_t	j;

	j = 0;
	while (!buff->index && ++j && (ret = read(fd, buff->mem, BUFF_SIZE)))
	{
		i = 0;
		buff->mem[ret] = 0;
		if (ret == -1 || !(tmp = ft_lstnew(buff->mem, ret + 1)))
			return (-1);
		ft_lstadd_end(list, tmp);
		while (buff->mem[i] && buff->mem[i] != '\n' && ++len > 0)
			i++;
		if (buff->mem[i] == '\n' && (buff->index = i))
			return (1);
		buff->index = 0;
	}
	return (j == 0 ? 1 : 0);
}

int			get_next_line(const int fd, char **line)
{
	t_list			*list;
	static t_buff	buff;
	size_t			len;
	int				i;

	if (BUFF_SIZE <= 0)
		return (-1);
	len = 0;
	list = NULL;
	i = buff.index;
	if (buff.index)
	{
		if (!(list = ft_lstnew(&(buff.mem[i]), ft_strlen(&(buff.mem[i])) + 1)))
			return (-1);
		while (buff.mem[i] && buff.mem[i] != '\n' && ++len > 0)
			i++;
		if (buff.mem[i] == '\n' && ++i)
			buff.index += (i - buff.index);
		else
			buff.index = 0;
	}
	if ((i = gnl_read(&list, fd, len, &buff)) == -1)
		return (-1);
	return ((*line = ft_strnew(len)) ? gnl_write(&list, line, i) : -1);
}
