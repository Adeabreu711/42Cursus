/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:29:34 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/11 17:29:36 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @return The size of the given string.
 * @exception Terminating null bite ('\0') excluded.
 */
size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	//(void)argc;
// 	if(argc < 2 || argc > 2)
// 		return (0);
// 	printf("%i\n", ft_strlen(argv[1]));
// }
