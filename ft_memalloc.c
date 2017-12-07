/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:01:01 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/27 18:57:19 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Alloue (avec malloc(3)) et retourne une zone de mémoire
** “fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation échoue,
** la fonction renvoie NULL.
**
** PARAM #1 : La taille de la zone de mémoire à allouer.
**
** RETOUR : La zone de mémoire allouée.
*/

void	*ft_memalloc(size_t size)
{
	char	*mem;

	mem = (char *)malloc(sizeof(char) * size);
	if (mem == NULL || size == 0)
		return (NULL);
	while (size--)
		mem[size] = 0;
	return ((void *)mem);
}
