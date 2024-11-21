/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:41:23 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/11 17:41:25 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Fill the first "n" bytes of the memory area pointed to.
 * @param {void*} "s" pointer to the targeted memory location.
 * @param {int} "c" value to turn into.
 * @param {size_t} "n" size.
 * @return The given memory location ("s").
 */
void	*ft_memset(void *s, int c, size_t n)
{
	char			*str;
	unsigned int	i;

	i = -1;
	str = (char *)s;
	while (++i < n)
		str[i] = c;
	return (s);
}

// #include <string.h>
// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	char t[] = "4002";
// 	(void)argc;
// 	// if(argc < 2 || argc > 2)
// 	// 	return (0);
// 	printf("%s\n", (char*)ft_memset(t, '0', 4));
// 	printf("%s\n", (char*)memset(t, '0', 4));

// 	printf("%s\n", t);
// }
