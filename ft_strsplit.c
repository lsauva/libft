/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:48:52 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 16:04:56 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Alloue (avec malloc(3)) et retourne un tableau de chaines de
** caractères “fraiches” (toutes terminées par un ’\0’, le tableau
** également donc) résultant de la découpe de s selon le caractère c.
** Si l’allocation echoue, la fonction retourne NULL.
** Exemple :
** ft_strsplit("*salut*les***etudiants*", ’*’)
** renvoie le tableau ["salut", "les", "etudiants"].
**
** PARAM #1 : La chaine de caractères à découper.
** PARAM #2 : Le caractère selon lequel découper la chaine.
**
** RETOUR : Le tableau de chaines de caractères “fraiches” résultant de la
** découpe.
**
** word_count compte le nombre de mots dans la chaine s separes par le char c.
*/

static int		word_count(char const *s, char c)
{
	int		wd;
	int		i;

	i = 0;
	wd = 0;
	if (s[0] != c)
		wd++;
	while (s[++i])
	{
		if (s[i] != c && s[i - 1] == c)
			wd++;
	}
	return (wd);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		ind;
	char	*tmp;
	char	**tab;

	i = -1;
	ind = -1;
	if (!s || !(tab = (char **)ft_memalloc(sizeof(char *)
					* (word_count(s, c) + 1))))
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			tmp = ft_strsub(s, i, j);
			tab[++ind] = tmp;
			i += j - 1;
		}
	}
	return (tab);
}
