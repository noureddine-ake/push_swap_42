/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:33:43 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/28 17:21:46 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	find_smallest_index(t_list **a)
{
	t_list	*temp;
	int		min;

	temp = *a;
	min = temp->index;
	while (temp)
	{
		if (temp->index < min)
			min = temp->index;
		temp = temp->next;
	}
	return (min);
}

int	find_position(t_list **a)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *a;
	while (temp)
	{
		if (temp->index == find_smallest_index(&temp))
			break ;
		i++;
		temp = temp->next;
	}
	return (i);
}

int	ft_is_sorted(t_list **data)
{
	t_list	*temp;

	temp = *data;
	if (ft_lstsize(temp) <= 1)
		return (1);
	while (temp->next)
	{
		if (temp->index > temp->next->index)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	free_2d_arr(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}
