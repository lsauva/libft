/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:18:35 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 15:43:35 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Ecrit l’entier n sur le descripteur de fichier fd.
**
** PARAM #1 : L'entier a ecrire.
** PARAM #2 : le file descriptor.
**
** RETOUR : rien.
*/

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
	}
	else
	{
		nb = n;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		if (n > 0)
			ft_putchar_fd(n + '0', fd);
		else
			ft_putchar_fd('0' - n, fd);
	}
}
