/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:07:59 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/22 11:19:40 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*temp;

	temp = 0;
	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		temp = *lst;
		(*lst) = (*lst)->next;
		free(temp);
	}
	*lst = NULL;
}
