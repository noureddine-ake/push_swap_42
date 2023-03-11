/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:09:57 by nakebli           #+#    #+#             */
/*   Updated: 2023/03/11 19:24:37 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **a, t_list **b, int flag)
{
	t_list	*c;

	c = *a;
	(*a) = (*a)->next;
	c->next = *b;
	*b = c;
	if (!flag)
		ft_putstr_fd("pb\n", 1);
}

void	pa(t_list **a, t_list **b, int flag)
{
	t_list	*c;

	c = *b;
	(*b) = (*b)->next;
	c->next = *a;
	*a = c;
	if (!flag)
		ft_putstr_fd("pa\n", 1);
}
