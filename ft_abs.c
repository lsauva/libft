/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:32:12 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 12:35:13 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Prend un entier n en parametre et renvoie sa valeur absolue.
**
** PARAM #1 : L'entier a traiter.
**
** Retour : La valeur absolue de n.
*/

int		ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
