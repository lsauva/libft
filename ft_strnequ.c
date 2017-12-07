/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:17:25 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/27 13:29:29 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Compare lexicographiquement s1 et s2 jusqu'a n caracteres max
** ou bien qu'un '\0' ait ete rencontre. Si les chaines sont egales, la
** fonction retourne 1, 0 sinon
**
** PARAM #1 : La 1ere chaine a comparer.
** PARAM #2 : La 2e chaine.
** PARAM #3 : Le nombre de caracteres a comparer au max.
**
** RETOUR : 1 si les chaines sont egales, 0 sinon.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n < 1)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] == s2[i] && s2[i] != '\0' && i < (n - 1))
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
	if (i == (n - 1))
		return (1);
	return (0);
}
