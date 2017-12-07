/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:02:57 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/27 14:24:26 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Parcourt la liste lst en appliquant à chaque maillon la fct f.
**
** PARAM #1 : Pointeur sur le 1er maillon d'une liste.
** PARAM #2 : L'adresse d'une fonction a laquelle appliquer chaque maillon
** de la liste
**
** RETOUR : rien.
*/

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst && f)
	{
		ft_lstiter(lst->next, f);
		(*f)(lst);
	}
}
