/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:57:40 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/23 15:19:39 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **a)
{
	t_list	*c;

	c = *a;
	*a = (*a)->next;
	c->next = NULL;
	ft_lstlast(*a)->next = c;
}

void	rb(t_list **b)
{
	t_list	*c;

	c = *b;
	*b = (*b)->next;
	c->next = NULL;
	ft_lstlast(*b)->next = c;
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}
