/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 20:57:57 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/18 20:58:00 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Write the given string "s" in the given folder "fd".
 * folowed by a new line.
 */
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}

// #include <fcntl.h>
// int	main()
// {
// 	int fd;
// 	fd = open("test", O_WRONLY);
// 	t_putendl_fd("je suis un oiseau.", fd);
// }
