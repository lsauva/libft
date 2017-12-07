/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:39:49 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 15:41:20 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Ecrit la chaine s dans le descripteur de fichier fd suivi d'un
** '\n'
**
** PARAM #1 : La chaine a ecrire.
** PARAM #2 : le file descriptor.
**
** RETOUR : rien.
*/

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
