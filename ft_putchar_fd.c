/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:08:35 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 12:20:26 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Ecrit le caractere c sur le descripteur de fichier fd.
**
** PARAM #1 : Le caractere a ecrire
** PARAM #2 : Le file descriptor
**
** RETOUR : rien
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
