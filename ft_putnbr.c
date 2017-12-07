/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:42:21 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 14:47:37 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Affiche l'entier n sur la sortie standard
**
** PARAM #1 : L'entier a afficher
**
** RETOUR : rien.
*/

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
}
