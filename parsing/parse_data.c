/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_data.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:51:58 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/23 19:46:01 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*read_numbers(char **av, t_list *data)
{
	char	**splited;
	int		j;
	int		i;

	i = 1;
	while (av[i])
	{
		splited = ft_split(av[i], ' ');
		if (!splited)
			return (NULL);
		j = -1;
		while (splited[++j] != NULL)
			ft_lstadd_back(&data, ft_lstnew(ft_atoi(splited[j])));
		i++;
		free_2d_arr(splited);
	}
	return (data);
}

void	set_index(t_list *data)
{
	int		i;
	int		j;
	t_list	*temp;
	t_list	*temp2;

	temp = data;
	i = 0;
	while (temp)
	{
		temp->index = 0;
		j = -1;
		temp2 = data;
		while (++j < i)
		{
			if (temp->content > temp2->content)
				temp->index++;
			else if (temp->content < temp2->content)
				temp2->index++;
			else if (temp->content == temp2->content)
				exit_failure("\x1B[31mnumber duplicated !");
			temp2 = temp2->next;
		}
		temp = temp->next;
		i++;
	}
}
