/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:14:52 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/22 20:36:30 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **a)
{
	t_list	*c;

	c = *a;
	*a = (*a)->next;
	c->next = (*a)->next;
	(*a)-> next = c;
}

void	sb(t_list **b)
{
	t_list	*c;

	c = *b;
	*b = (*b)->next;
	c->next = (*b)->next;
	(*b)-> next = c;
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
}
