/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5nums.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:44:04 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/23 20:50:59 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3nums(t_list **a)
{
	if ((*a)->content > (*a)->next->content
		&& (*a)->content < (*a)->next->next->content)
		sa(a);
	else if ((*a)->content > (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content)
	{
		sa(a);
		rra(a);
	}
	else if ((*a)->content > (*a)->next->content
		&& (*a)->content > (*a)->next->next->content)
		ra(a);
	else if ((*a)->content < (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content
		&& (*a)->content < (*a)->next->next->content)
	{
		sa(a);
		ra(a);
	}
	else if ((*a)->content < (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content)
		rra(a);
}

void	sort_4_5nums(t_list **a, t_list **b)
{
	int	idx;

	idx = 0;
	(void)b;
	while (*a && !ft_is_sorted(a))
	{
		// printf("idx = %d   pos = %d\n", idx, find_position(*a, idx));
		while (find_position(*a, idx) != 0)
		{
			printf("idx = %d   pos = %d\n", idx, find_position(*a, idx));
			if (find_position(*a, idx) < ft_lstsize(*a) / 2)
				ra(a);
			else
				rra(a);
			sleep(1);
		}
		pb(a, b);
		print_list(*b);
		idx++;
		sleep(1);
	}
}
