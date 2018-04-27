/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 15:22:31 by lsauvage          #+#    #+#             */
/*   Updated: 2018/04/27 15:42:05 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

/*
** DESCRIPTION : Ajoute l’élément new en fin de la liste.
**
** PARAM #1 : L’adresse d’un pointeur sur le premier maillon d’une liste.
** PARAM #2 : Le maillon à ajouter en fin de cette liste.
**
** RETOUR : rien.
*/

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
