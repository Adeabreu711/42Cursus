/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:24:33 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/18 11:24:38 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @return A pointer with "elementCount" elements with a "size" size,
 * all values are init to '\0'.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*mem;
	unsigned int	c_size;

	c_size = nmemb * size;
	mem = malloc(c_size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, c_size);
	return (mem);
}

// int	main()
// {
// 	char	*str = "test";
// 	int	len = 0;
// 	str = ft_calloc(len, sizeof(char));
// 	printf("%s\n", str);
// }
