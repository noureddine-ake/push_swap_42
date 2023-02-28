/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:44:04 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/28 12:53:31 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2nums(t_list **a)
{
	if ((*a)->index > (*a)->next->index)
		sa(a, 0);
}

void	sort_3nums(t_list **a)
{
	if ((*a)->content > (*a)->next->content
		&& (*a)->content < (*a)->next->next->content)
		sa(a, 0);
	else if ((*a)->content > (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content)
	{
		sa(a, 0);
		rra(a, 0);
	}
	else if ((*a)->content > (*a)->next->content
		&& (*a)->content > (*a)->next->next->content)
		ra(a, 0);
	else if ((*a)->content < (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content
		&& (*a)->content < (*a)->next->next->content)
	{
		sa(a, 0);
		ra(a, 0);
	}
	else if ((*a)->content < (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content)
		rra(a, 0);
}

void	sort_4_5nums(t_list **a, t_list **b)
{
	while (!ft_is_sorted(a) && ft_lstsize(*a) > 3)
	{
		while (find_position(a) != 0)
		{
			if (find_position(a) < 2)
				ra(a, 0);
			else
				rra(a, 0);
		}
		pb(a, b);
	}
	sort_3nums(a);
	while (ft_lstsize(*b) != 0)
		pa(a, b);
}
