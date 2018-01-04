/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 14:21:17 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/04 14:37:05 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Retourne un pointeur sur un element de liste a l'indice val.
** Return a pointer on a list element at the index val.
*/

t_list	*ft_lstat(t_list *lst, size_t val)
{
	size_t i;

	i = 0;
	while (i < val && lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
