/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:29:05 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/11 18:29:07 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * @brief Erase the first "n" bytes of the memory area pointed to.
 * @param {void*} "s" pointer to the targeted memory location.
 * @param {size_t} "n" size.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <string.h>
// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	char t[] = "4312";
// 	(void)argc;
// 	if(argc < 2 || argc > 2)
// 		return (0);
// 	ft_bzero(t, 2);
// 	bzero(t, 2);
// 	printf("%s\n", ft_bzero(t, 4));
// 	printf("%s\n", bzero(t, 4));

// 	printf("%c\n", t[1]);
// }
