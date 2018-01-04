/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:20:57 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/04 15:34:03 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return 1 if c is printable, 0 if not
** Retourne 1 si le caractere c est imprimable (entre 32 et 126 en valeur ASCII)
*/

int		ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
