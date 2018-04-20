/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:22:31 by lsauvage          #+#    #+#             */
/*   Updated: 2018/04/20 17:13:53 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_end(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (alst && new)
	{
		if (!(*alst))
		{
			new->next = NULL;
			*alst = new;
		}
		else
		{
			tmp = *alst;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
			new->next = NULL;
		}
	}
}
