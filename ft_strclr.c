/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:58:17 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/21 16:02:11 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Assigne la valer '\0' a tous les caracteres de la chaine
** passee en parametre.
**
** PARAM : La chaine de caracteres a clearer.
**
** RETOUR : rien
*/

void	ft_strclr(char *s)
{
	int		i;

	i = 0;
	while (s && s[i])
	{
		s[i] = '\0';
		i++;
	}
}
