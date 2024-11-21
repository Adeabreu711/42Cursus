/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:09:00 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/17 15:09:01 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/**
 * @return A pointer targeting the last char (int "c")
 * encountered in the given string "s".
 */
char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*temp;

	i = -1;
	temp = NULL;
	while (s[++i])
		if ((unsigned char)s[i] == (unsigned char)c)
			temp = (unsigned char *)(s + i);
	if ((unsigned char)c == '\0')
		return ((char *)s + i);
	return ((char *)temp);
}

// int	main()
// {
// 	char	*str = "je suis un test";
// 	char	c = 's';

// 	printf("%s\n", ft_strrchr(str, c));
// 	printf("%s\n", strrchr(str, c));
// }
