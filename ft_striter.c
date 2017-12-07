/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:04:33 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/21 16:13:54 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Applique la fonction f a chaque caractere de la chaine passee
** en parametre. Chaque caractere est passe par adresse a la fonction f afin
** de pouvoir etre modifie si necessaire.
**
** PARAM #1 : La chaine de caractere sur laquelle iterer.
** PARAM #2 : La fonction a appeler sur chaque caractere de s
**
** RETOUR : rien
*/

void		ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (*s)
	{
		f(s);
		s++;
	}
}
