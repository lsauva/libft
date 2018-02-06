/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bitwise.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 16:34:07 by lsauvage          #+#    #+#             */
/*   Updated: 2018/02/06 19:49:48 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen_bitwise(const char *str)
{
    size_t len;
    
    len = 0;
    for (;;)
    {
        unsigned x = *(unsigned *)s;
        if ((x & 0xFF) == 0)
            return len;
        if ((x & 0xFF00) == 0)
            return len + 1;
        if ((x & 0xFF0000) == 0)
            return len + 2;
        if ((x & 0xFF000000) == 0)
            return len + 3;
        s += 4, len += 4;
    }
}