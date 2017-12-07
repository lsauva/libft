/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:15:18 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 10:56:43 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction strstr() cherche la 1ere occurrence de aiguille
** dans meule_de_foin. Les '\0' de fin de chaine ne sont pas compares.
**
** RETOUR : meule_de_foin si aiguille est vide, NULL si aiguille n'est pas dans
** meule_de_foin, un pointeur sur le 1er caractere de la 1ere occurrence de
** aiguille.
*/

char	*ft_strstr(const char *meule_de_foin, const char *aiguille)
{
	int		i;
	int		j;

	i = -1;
	if (!(aiguille[0]))
		return ((char *)meule_de_foin);
	while (meule_de_foin[++i])
	{
		j = 0;
		if (meule_de_foin[i] == aiguille[j])
		{
			while (meule_de_foin[i + j] == aiguille[j] && meule_de_foin[i + j]
					&& aiguille[j])
			{
				j++;
				if (!(aiguille[j]))
					return ((char *)meule_de_foin + i);
			}
		}
	}
	return (NULL);
}
