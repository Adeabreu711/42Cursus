/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:16:11 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/21 19:16:12 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (lst);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

// int	main()
// {
// 	int	i = 0;
// 	t_list	*lst = malloc(sizeof(t_list));

// 	t_list	*t = lst;
// 	while (i < 5)
// 	{
// 		printf("ADD\n");
// 		t->next = malloc(sizeof(t_list));
// 		t = t->next;
// 		i++;
// 	}
// 	printf("%i\n", ft_lstsize(lst));
// }
