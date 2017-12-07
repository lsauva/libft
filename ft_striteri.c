/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:16:04 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/21 16:25:40 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Applique la fonction f a chaque caractere de la chaine passee
** en parametre en precisant son index en premier argument.
** Chaque caractere est passe par adresse a la fonction f afin de pouvoir etre
** modifie si necessaire.
**
** PARAM #1 : Lachaine de caracteres sur laquelle iterer.
** PARAM #2 : La fonction a appeler sur chaque caractere de s et son index.
**
** RETOUR : rien
*/

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}
