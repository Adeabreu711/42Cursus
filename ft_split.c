/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:25:47 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/18 14:25:48 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

static int	ft_count_splits(char const *s, char c)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	while (s[++i])
		if (c != s[i] && (!s[i + 1] || s[i + 1] == c))
			count++;
	return (count);
}

static void	ft_freesplits(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

/**
 * @brief Split a string into multiple strings. depending on the separator "c".
 * @param {charconst*} "s" pointer to a string to split.
 * @param {char} "c" sepator used to delimit the string "s".
 * @return A pointer of strings corresponding to the split of the string
 * "s" by the separator "c".
 */
char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		start;
	int		j;

	if (!s)
		return (NULL);
	i = -1;
	j = 0;
	str = ft_calloc(ft_count_splits(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	start = i;
	while (s[++i])
	{
		if (c != s[i] && (i == 0 || s[i - 1] == c))
			start = i;
		if (c != s[i] && (!s[i + 1] || s[i + 1] == c))
		{
			str[j] = ft_substr(s, start, i - start + 1);
			if (!str[j++])
			{
				ft_freesplits(str);
				return (NULL);
			}
		}
	}
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	char **str;
// 	char *	s = "\0aa\0bbb";
// 	char c = '\0';

// 	//int	count = ft_count_splits(s, c);
// 	str = ft_split(s, c);

// 	int i = -1;
// 	while (str[++i])
// 		printf("str[%i] : \"%s\"\n", i, str[i]);
// }
