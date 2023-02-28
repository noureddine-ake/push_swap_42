/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrevers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:28:18 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/28 17:22:31 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rra(t_list **a, int flag)
{
	t_list	*c;
	t_list	*d;

	if (ft_lstsize(*a) < 2)
		return ;
	c = ft_lstlast(*a);
	d = *a;
	while (d->next != c)
		d = d->next;
	c->next = *a;
	d->next = NULL;
	*a = c;
	if (!flag)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_list **b, int flag)
{
	t_list	*c;
	t_list	*d;

	if (ft_lstsize(*b) < 2)
		return ;
	c = ft_lstlast(*b);
	d = *b;
	while (d->next != c)
		d = d->next;
	c->next = *b;
	d->next = NULL;
	*b = c;
	if (!flag)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a, 1);
	rrb(b, 1);
	ft_putstr_fd("rrr\n", 1);
}
