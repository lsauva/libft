/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:53:44 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 21:38:18 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Verifie si une chaine est en majuscule.
**
** PARAM #1 : La chaine a tester.
**
** RETOUR : Renvoie 1 si la chaine ne contient que des majuscules, 0 sinon.
*/

int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(ft_isupper(str[i])))
			return (0);
		i++;
	}
	return (1);
}
