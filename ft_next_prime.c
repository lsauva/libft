/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 15:11:25 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/04 15:17:58 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Retourne le nombre premier suivant nbr.
**
** PARAM #1 : L'entier de depart.
**
** RETOUR : le nombre premier suivant nbr, 0 si erreur (limite int MAX).
*/

int		ft_next_prime(int nbr)
{
	while (++nbr < 2147483647)
	{
		if (ft_is_prime(nbr))
			return (nbr);
	}
	return (0);
}
