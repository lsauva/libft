/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 15:39:49 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/04 15:48:40 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Check for a hexadecimal digits, that is, one of :
** 0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F
** Verifie si c est un chiffre hexadecimal, cf. liste au dessus.
*/

int		ft_isxdigit(int c)
{
	return (ft_isdigit(c) || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'));
}
