/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsauvage <lsauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 19:29:36 by lsauvage          #+#    #+#             */
/*   Updated: 2018/02/06 19:59:24 by lsauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** main de test pour les fonctions de la libft
*/

#include "./libft.h"
#include <stdio.h>

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("strlen : %lu", strlen(av[1]));
        printf("ft_strlen : %zu", ft_strlen(av[1]));
        printf("ft_strlen_bitwise : %zu", ft_strlen_bitwise(av[1]));
    }
    ft_putchar('\n');
    return (0);
}
