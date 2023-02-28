/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:57:40 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/25 21:13:02 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **a, int flag)
{
	t_list	*c;

	if (ft_lstsize(*a) < 2)
		return ;
	c = *a;
	*a = (*a)->next;
	c->next = NULL;
	ft_lstlast(*a)->next = c;
	if (!flag)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **b, int flag)
{
	t_list	*c;

	if (ft_lstsize(*b) < 2)
		return ;
	c = *b;
	*b = (*b)->next;
	c->next = NULL;
	ft_lstlast(*b)->next = c;
	if (!flag)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_list **a, t_list **b)
{
	ra(a, 1);
	rb(b, 1);
	ft_putstr_fd("rr\n", 1);
}
