/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:08:21 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/22 14:51:23 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Compare lexicographiquement s1 et s2. Si les 2 chaines sont
** egales, la fonction retourne 1, ou 0 sinon.
**
** PARAM #1 : La 1ere chaine a comparer.
** PARAM #2 : La 2e chaine.
**
** RETOUR : 1 ou 0 selon que les chaines sont egales ou non.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned int	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (0);
	}
	return (1);
}
