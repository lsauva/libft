/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:42:04 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/04 14:45:43 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The bzero function sets the first n bytes of the area starting at s to zero.
** La fonction bzero met a 0 les n 1ers octets du bloc pointe par s
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
