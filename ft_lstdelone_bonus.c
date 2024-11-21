/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:52:17 by alde-abr          #+#    #+#             */
/*   Updated: 2024/11/21 19:52:18 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del)
		del(lst->content);
	free(lst);
}

// void	test(void *v)
// {
// 	t_list	*temp;

// 	if (!v)
// 		return ;
// 	temp  = (t_list *)v;
// 	free(temp->content);
// }

// int	main()
// {
// 	int	i = 0;
// 	t_list	*lst = malloc(sizeof(t_list));
// 	t_list	*temp = lst;
// 	while (i < 5)
// 	{
// 		temp->next = malloc(sizeof(t_list));
// 		temp->content = malloc(2 * sizeof(char));
// 		*(char *)temp->content = (i + '0');
// 		temp = temp->next;
// 		i++;
// 	}
// 	void (*t)(void*) = test;

// 	ft_lstdelone(lst->next->next, t);

// 	temp = lst;
// 	while (temp->next)
// 	{
// 		printf("content : %s\n", (char *)temp->content);
// 		printf("next\n");
// 		temp = temp->next;
// 	}
// }
