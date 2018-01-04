/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:40:17 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/04 15:29:07 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return 1 if c is a digit, 0 if not.
** Retourne 1 si c est un chiffre, 0 sinon.
*/

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
