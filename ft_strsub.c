/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:27:26 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/21 17:38:07 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Alloue (avec malloc()) et retourne la cpoie "fraiche" d'un
** troncon de la chaine passee en parametre. Le troncon commence a l'index
** start et a pour longueru len. Si start et len ne designent pas un troncon
** de chaine valide, le comportement est indetermine. Si l'allocation echoue,
** la fonction renvoie NULL.
**
** PARAM #1 : La chaine dans laquelle chercher le tronconon a copier.
** PARAM #2 : L'index dans la chaine ou debute le troncon a copier.
** PARAM #3 : La longueur du troncon a copier.
**
** RETOUR : Le troncon.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*new_s;
	size_t		i;
	size_t		j;

	new_s = ft_strnew(len);
	if (!s || !new_s)
		return (NULL);
	i = 0;
	j = 0;
	while (start)
	{
		i++;
		start--;
	}
	while (j < len)
	{
		new_s[j] = s[i];
		j++;
		i++;
	}
	new_s[j] = '\0';
	return (new_s);
}
