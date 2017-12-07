/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:32:26 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 21:52:18 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : La fonction memset() remplit les n premiers octets de la zone
** mémoire pointée par b avec l'octet c.
**
** VALEUR RENVOYEE : La fonction memset() renvoie un pointeur sur la zone
** mémoire b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	char *str;

	str = b;
	while (len)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}
