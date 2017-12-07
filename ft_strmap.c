/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 16:25:55 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/27 15:56:42 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Applique la fonction f a chaque caractere de la chaine passee
** en parametre pour creer une nouvelle chaine "fraiche" (avec malloc())
** resultant des applications successives de f.
**
** PARAM #1 : La chaine de caracteres sur laquelle iterer.
** PARAM #2 : La fonction a appeler sur chaque caractere de s.
**
** RETOUR : La chaine "fraiche" resultant des applications successives de f.
*/

char		*ft_strmap(char const *s, char (*f)(char))
{
	char			*new_s;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	if (!(new_s = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = f(s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
