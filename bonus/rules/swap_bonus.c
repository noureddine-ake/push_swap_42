/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:14:52 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/28 17:22:20 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	sa(t_list **a, int flag)
{
	t_list	*c;

	if (ft_lstsize(*a) < 2)
		return ;
	c = *a;
	*a = (*a)->next;
	c->next = (*a)->next;
	(*a)-> next = c;
	if (!flag)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_list **b, int flag)
{
	t_list	*c;

	if (ft_lstsize(*b) < 2)
		return ;
	c = *b;
	*b = (*b)->next;
	c->next = (*b)->next;
	(*b)-> next = c;
	if (!flag)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_list **a, t_list **b)
{
	sa(a, 1);
	sb(b, 1);
	ft_putstr_fd("ss\n", 1);
}
