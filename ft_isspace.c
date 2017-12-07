/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:34:21 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 15:45:07 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Verifie si un caractere est un caractere d'espacement.
*/

int		ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\v'
			|| c == '\n' || c == '\r' || c == '\f');
}
