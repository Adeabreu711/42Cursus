/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:46:42 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/13 19:46:44 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/**
 * @return The pointer at the first "c" int encountered in the given string "s",
 * NULL if "c" not found.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}

// int	main()
// {
// 	char	*str = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char	c = '\0';

// 	printf("%s\n", ft_strchr(str, c));
// 	printf("%s\n", strchr(str, c));
// }
