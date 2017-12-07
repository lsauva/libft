/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 17:00:40 by lsauvage          #+#    #+#             */
/*   Updated: 2017/11/24 17:09:50 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION : Alloue (avec malloc(3)) et retourne un maillon “frais”.
** Les champs content et content_size du nouveau maillon sont initialisés par
** copie des paramètres de la fonction. Si le paramètre content est nul, le
** champs content est initialisé à NULL et le champs content_size est
** initialisé à 0 quelque soit la valeur du paramètre content_size.
** Le champ next est initialisé à NULL.
** Si l’allocation échoue, la fonction renvoie NULL.
**
** PARAM #1 : Le contenu à ajouter au nouveau maillon.
** PARAM #2 : La taille du contenu à ajouter au nouveau maillon.
**
** RETOUR : Le nouveau maillon
*/

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = (void *)ft_memalloc(content_size);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
