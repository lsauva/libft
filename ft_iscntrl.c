/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 13:00:51 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/29 21:45:00 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Verifie si un caractere fait partie des caracteres de controle,
** equivalent aux caracteres non printables.
**
** PARAM #1 : caractere a tester.
**
** RETOUR : Renvoie 1 si le caractere fait partie du block C0, 0 sinon.
*/

int		ft_iscntrl(int c)
{
	return (c < 32 || c == 127);
}
