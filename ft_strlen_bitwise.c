/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bitwise.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 16:34:07 by lsauvage          #+#    #+#             */
/*   Updated: 2018/02/07 19:28:32 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

size_t      ft_strlen_bitwise(const char *str)
{
    size_t  len;

    len = 0;
    while (1)
    {
        unsigned x = *(unsigned *)str;
        if ((x & 0xFF) == 0)
            return (len);
        if ((x & 0xFF00) == 0)
            return (len + 1);
        if ((x & 0xFF0000) == 0)
            return (len + 2);
        if ((x & 0xFF000000) == 0)
            return (len + 3);
        str << 4;
        len += 4;
    }
}
