/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:47:43 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/17 15:47:44 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/**
 * @return A pointer targeting the first char (int "c") encountered in
 * the given memory area "s", NULL if char (int "c") not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)s + i);
	}
	return (NULL);
}

// int	main()
// {
// 	//printf("%s\n", ft_memchr("je suis un test", 'j', 1));
// 	printf("%s\n", ft_memchr("/|\x12\xff\x09\x42\2002\42|\\", '\200', 10));
// 	printf("%s\n", memchr("|\x12\xff\x09\x42\2002\42|\\", '\200', 10));
// }
