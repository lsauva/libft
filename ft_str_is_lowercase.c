/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 17:01:00 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 21:37:34 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Verifie si une chaine est en minuscule.
**
** PARAM #1 : La chaine a tester.
**
** RETOUR : Renvoie 1 si la chaine ne contient que des minuscules.
*/

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(ft_islower(str[i])))
			return (0);
		i++;
	}
	return (1);
}
