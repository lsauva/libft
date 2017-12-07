/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:50:53 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/16 16:07:17 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction memccpy() copie au plus n octets de la zone
** mémoire src vers la zone mémoire dest, s'arrêtant dès qu'elle rencontre
** le caractère c.
**
** VALEUR RENVOYEE : La fonction memccpy() renvoie un pointeur sur le caractère
** immédiatement après c dans la zone dest, ou NULL si c n'a pas été trouvé
** dans les n premiers caractères de src.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		if (*(unsigned char *)src == (unsigned char)c)
		{
			dst++;
			return (dst);
		}
		dst++;
		src++;
		i++;
	}
	return (NULL);
}
