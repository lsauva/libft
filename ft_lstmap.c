/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:26:36 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/27 16:52:04 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Parcourt la liste lst en appliquant à chaque maillon la
** fonction f et crée une nouvelle liste “fraiche” avec malloc(3) résultant des
** applications successives. Si une allocation échoue, la fonction renvoie NULL.
**
** PARAM #1 : Pointeur sur le 1er maillon d'une liste.
** PARAM #2 : L’adresse d’une fonction à appliquer à chaque maillon de la liste
** pour créer une nouvelle liste.
**
** RETOUR : La nouvelle liste.
*/

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_list;

	if (lst && *f)
	{
		new_list = f(lst);
		if (new_list && lst->next)
			new_list->next = ft_lstmap(lst->next, f);
		return (new_list);
	}
	return (NULL);
}
