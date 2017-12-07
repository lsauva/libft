/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:16:42 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/27 18:57:23 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Alloue (avec malloc()) et retourne une chaine de caractere
** fraiche terminee par un '\0'. Chaque caractere de la chaine est initialise a
** '\0'. Si l'allocation echoue, la fonction renvoie NULL.
**
**PARAMS : La taille de la chaine de caracteres a allouer.
**
** RETOUR : La chaine de caractere allouee et initialisee a 0.
*/

char	*ft_strnew(size_t size)
{
	char	*str;

	if ((str = ft_memalloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	return (str);
}
