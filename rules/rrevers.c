/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrevers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:28:18 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/23 15:22:35 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **a)
{
	t_list	*c;
	t_list	*d;

	c = ft_lstlast(*a);
	d = *a;
	while (d->next != c)
		d = d->next;
	c->next = *a;
	d->next = NULL;
	*a = c;
}

void	rrb(t_list **b)
{
	t_list	*c;
	t_list	*d;

	c = ft_lstlast(*b);
	d = *b;
	while (d->next != c)
		d = d->next;
	c->next = *b;
	d->next = NULL;
	*b = c;
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
}
