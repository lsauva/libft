/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:35:26 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 12:37:43 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : retourne la valeur la plus grande des 2 entiers en parametre.
*/

int		ft_max(int a, int b)
{
	return (a > b ? a : b);
}
