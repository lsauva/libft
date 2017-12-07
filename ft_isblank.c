/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:44:25 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 22:14:10 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Verifie si un caractere est un espace ' ', une tabulation '\t'
**
** PARAM #1 : Le caractere a tester.
**
** RETOUR : Renvoie 1 si le caractere est un espace, 0 sinon.
*/

int		ft_isblank(int c)
{
	return (c == ' ' || c == '\t');
}
