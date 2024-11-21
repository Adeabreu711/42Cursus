/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:27:16 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/17 18:27:17 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @return A int corresponding to the given string.
 * @exception The string cannot start with letters, have more than
 * two signs before the numbers.
 * @example "    +123ABC" Correct / "+-123ABC" Incorrect
 */
int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				temp;
	int				sign;

	i = 0;
	temp = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -sign;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		temp *= 10;
		temp += nptr[i] - '0';
		i++;
	}
	return (temp * sign);
}

// #include <stdlib.h>
// int	main()
// {
// 	printf("%i\n", ft_atoi("\007 8"));
// 	//printf("%i\n", atoi("+42je suis un test"));
// }
