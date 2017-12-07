/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:31:00 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/27 13:37:33 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Prend en paramètre l’adresse d’un pointeur sur un maillon et
** libère la mémoire de ce maillon et celle de tous ses successeurs l’un après
** l’autre avec del et free(3). Pour terminer, le pointeur sur le premier
** maillon maintenant libéré doit être mis à NULL (de manière similaire à la
** fonction ft_memdel de la partie obligatoire).
**
** PARAM #1 : L’adresse d’un pointeur sur le premier maillon d’une liste à
** libérer.
**
** RETOUR : rien.
*/

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (*alst && del)
	{
		ft_lstdel(&(*alst)->next, del);
		ft_lstdelone(alst, del);
	}
}
