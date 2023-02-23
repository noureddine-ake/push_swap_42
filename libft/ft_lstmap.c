/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:01:12 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/22 11:22:42 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int))
{
	t_list	*temp;
	t_list	*new;
	t_list	*node;

	temp = lst;
	new = 0;
	if (lst && f)
	{
		while (temp)
		{
			node = ft_lstnew(f(temp -> content));
			if (!node)
			{
				ft_lstclear(&new, del);
				ft_lstdelone(node, del);
				return (NULL);
			}
			ft_lstadd_back(&new, node);
			temp = temp->next;
		}
	}
	return (new);
}
