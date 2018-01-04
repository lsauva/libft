/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:18:55 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/04 15:24:43 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return 1 if c is ascii, 0 if not.
** Retourne 1 si c est un caractere ascii, 0 sinon
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
