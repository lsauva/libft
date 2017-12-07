/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:34:35 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 15:38:10 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Verifie si la chaine de caracteres en parametre est constituee
** de caracteres printables.
**
** RETOUR : Renvoie 1 si str ne contient que des caracteres printables, 0 sinon.
*/

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isprint(str[i])))
			return (0);
		i++;
	}
	return (1);
}
