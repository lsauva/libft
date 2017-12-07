/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize_error.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:11:53 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/30 14:58:25 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	if (ft_islower(str[0]))
		str[0] = ft_toupper(str[0]);
	i = 1;
	while (str[i])
	{
		if (!(ft_isalnum(str[i])))
			if (ft_islower(str[i + 1]))
				str[i + 1] = ft_toupper(str[i + 1]);
		i++;
	}
	return (str);
}
