/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:08:11 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 16:51:06 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction memchr() examine les n premiers octets de la zone
** mémoire pointée par s à la recherche du caractère c. Le premier octet
** correspondant à c (interprété comme un unsigned char) arrête l'opération.
**
** VALEUR RENVOYEE : La fonction memchr() renvoit un pointeur sur l'octet
** correspondant, ou NULL si le caractère n'est pas présent dans la zone de
** mémoire concernée.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	letter;
	size_t			i;

	str = (unsigned char *)s;
	letter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == letter)
			return (str + i);
		i++;
	}
	return (NULL);
}
