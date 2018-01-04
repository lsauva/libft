/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:27:10 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/04 14:42:01 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Transforme une chaine de caracteres en entier.
** Convert a string to integer.
*/

int		ft_atoi(const char *str)
{
	int i;
	int toi;
	int neg;

	i = 0;
	toi = 0;
	neg = 1;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		toi = (toi * 10) + (str[i] - 48);
		i++;
	}
	return (neg * toi);
}
