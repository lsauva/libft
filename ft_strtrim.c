/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:28:01 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 17:32:44 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Alloue (avec malloc(3)) et retourne une copie de la chaine
** passée en paramètre sans les espaces blancs au debut et à la fin de cette
** chaine. On considère comme espaces blancs les caractères ’ ’, ’\n’ et ’\t’.
** Si s ne contient pas d’espaces blancs au début ou à la fin, la fonction
** renvoie une copie de s. Si l’allocation echoue, la fonction renvoie NULL
**
** PARAM #1 : La chaine de caractères à trimmer.
**
** RETOUR : La chaine de caractère “fraiche” trimmée ou une copie de s sinon.
*/

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(s[i]) == 1)
	{
		i++;
		if (s[i] == '\0')
			return (ft_strdup(""));
	}
	len = ft_strlen(s);
	if (s[len] == '\0')
		len--;
	while (ft_isspace(s[len]) == 1)
		len--;
	return (ft_strsub(s, i, len - i + 1));
}
