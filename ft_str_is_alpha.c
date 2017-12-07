/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:55:31 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 15:30:22 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Verifie si une chaine de caracteres est composee uniquement de
** lettres ('a'->'z' || 'A'->'Z' ).
**
** RETOUR : Renvoie 1 si la chaine est composee caractere alpha, 0 sinon.
*/

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isalpha(str[i])))
			return (0);
		i++;
	}
	return (1);
}
