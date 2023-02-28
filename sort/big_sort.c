/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:34:11 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/28 14:25:55 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	find_element_in_chunk(t_list **a, t_list **b, int e, int chunk_size)
{
	int	i;

	i = 0;
	while (i < chunk_size)
	{
		while ((*a)->index >= e)
			ra(a, 0);
		pb(a, b);
		if ((*b)->index < e - (chunk_size / 2))
		{
			if (*a && (*a)->index >= e && i < chunk_size)
				rr(a, b);
			else
				rb(b, 0);
		}
		i++;
	}
}

static int	find_bigest_index(t_list **a)
{
	t_list	*temp;
	int		max;

	temp = *a;
	max = temp->index;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}

int	find_bigi_position(t_list **a)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *a;
	while (temp)
	{
		if (temp->index == find_bigest_index(a))
			break ;
		i++;
		temp = temp->next;
	}
	return (i);
}

static void	push_back(t_list **a, t_list **b)
{
	int	bp;

	while (ft_lstsize(*b) > 0)
	{
		bp = find_bigi_position(b);
		if (bp > (ft_lstsize(*b) / 2))
		{
			while (find_bigi_position(b) != 0)
				rrb(b, 0);
		}
		else
		{
			while (find_bigi_position(b) != 0)
				rb(b, 0);
		}
		pa(a, b);
	}
}

void	big_sort(t_list **a, t_list **b, int div)
{
	int	e_chunk;
	int	st_size;
	int	num_chunk;
	int	chunk_size;

	num_chunk = 1;
	st_size = ft_lstsize(*a);
	chunk_size = st_size / div;
	e_chunk = 0;
	while (e_chunk < chunk_size * div)
	{
		e_chunk = (chunk_size) * num_chunk;
		find_element_in_chunk(a, b, e_chunk, chunk_size);
		num_chunk++;
	}
	if (*a)
		sort_4_5nums(a, b);
	push_back(a, b);
}
