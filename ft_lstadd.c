/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:35:55 by lsauvage          #+#    #+#             */
/*   Updated: 2018/04/20 17:13:32 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Ajoute l’élément new en tête de la liste.
**
** PARAM #1 : L’adresse d’un pointeur sur le premier maillon d’une liste.
** PARAM #2 : Le maillon à ajouter en tête de cette liste.
**
** RETOUR : rien.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
