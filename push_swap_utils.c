/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:33:43 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/23 20:44:28 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_position(t_list *a, int idx)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = a;
	while (temp)
	{
		if (temp->index == idx)
			break ;
		temp = temp->next;
		i++;
	}
	return (i);
}

int	ft_is_sorted(t_list **data)
{
	t_list	*temp;

	temp = *data;
	while (temp)
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
