/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:30:24 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 15:40:08 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Affiche la chaine s sur la sortie standard suivi d'un '\n'
**
** PARAM #1 : La chaine de caracteres a afficher.
**
** RETOUR : rien.
*/

void	ft_putendl(char const *s)
{
	int		i;
	char	newline;

	i = 0;
	newline = '\n';
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, &newline, 1);
}
