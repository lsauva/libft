/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:21:16 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 16:53:31 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Recherche une sous-chaine. La fonction strstr() cherche la
** 1ere occurrence de la sous-chaine s2 dans la chaine s1. la recherche se fait
** uniquement sur les n 1ers caracteres de s1.
**
** RETOUR : s1 si s2 est vide, NULL si s2 n'est pas trouve dans s1, sinon un
** pointeur sur le 1er caractere de la 1ere occurrence de s2.
*/

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*tmp;
	char	*mem;
	size_t	size;

	tmp = (char *)s1;
	mem = (char *)(s1 + n);
	size = ft_strlen(s2);
	if (!size)
		return (tmp);
	while ((tmp = ft_strchr(tmp, *s2)) && tmp <= mem)
	{
		if ((tmp + size <= mem) && !ft_strncmp(tmp, s2, size))
			return (tmp);
		tmp++;
	}
	return (NULL);
}
