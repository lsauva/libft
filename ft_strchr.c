/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 17:28:07 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/22 17:37:41 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction strchr() renvoie un pointeur sur la premiere
** occurrence du caractere c dans la chaine s.
**
** RETOUR : Un pointeur sur le caractere correspondant ou NULL si non trouve.
*/

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		else
			i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}
