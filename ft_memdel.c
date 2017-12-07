/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:23:38 by lsauvage          #+#    #+#             */
/*   Updated: 2017/12/06 18:16:51 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Prend en parametre l'adresse d'un pointeur dont la zone
** pointee doit etre liberee avec free(3), puis le pointeur est mis a NULL.
**
** PARAM #1 : L'adresse d'un pointeur dont il faut liberer la memoire puis le
** mettre a NULL.
**
** RETOUR : Rien
*/

void	ft_memdel(void **ap)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}
