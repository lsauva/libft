/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:28:35 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/21 15:33:29 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Prend en parametre l'adresse d'une chaine de caracteres qui
** doit etre liberee avec free() et son pointeur mis a NULL.
**
** PARAM : L'adresse de la chaine de caracteres dont il faut liberer la memoire
** et mettre le pointeur a NULL.
**
** RETOUR : rien
*/

void	ft_strdel(char **as)
{
	if (as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}
