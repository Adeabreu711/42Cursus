/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:04:31 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/18 13:04:32 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Trim characters in a string.
 * @param {charconst*} "s1" pointer to the string to cut.
 * @param {char} "set" a string containing a set of char to trim in
 * the given string "s1".
 * @return A copy of the string "s1" without the characters given in "set".
 */
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char			*str;
// 	int				i;
// 	unsigned int	count;

// 	i = -1;
// 	count = 0;
// 	while (s1[++i])
// 		if (ft_strchr(set, s1[i]))
// 			count++;
// 	str = malloc((i - count + 1) * sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	i = -1;
// 	count = 0;
// 	while (s1[++i])
// 		if (!ft_strchr(set, s1[i]))
// 			str[count++] = s1[i];
// 	return (str);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;

	i = 0;
	start = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (!s1[i])
		return (ft_strdup(""));
	start = i;
	while (s1[i])
		i++;
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	end = i;
	str = ft_substr(s1, start, end - start + 1);
	if (!str)
		return (NULL);
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", ft_strtrim("q", "q"));
// }
