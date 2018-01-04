/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 14:47:32 by lsauvage          #+#    #+#             */
/*   Updated: 2018/01/04 15:49:40 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Verfie si un caractere est en MAJUSCULE.
**
** RETOUR : Renvoie 1 si vrai, 0 sinon.
*/

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
