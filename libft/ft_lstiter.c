/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:03:28 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/22 11:21:06 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int))
{
	t_list	*temp;

	temp = lst;
	if (lst && f)
	{
		while (temp)
		{
			f(temp->content);
			temp = temp->next;
		}
	}
}
