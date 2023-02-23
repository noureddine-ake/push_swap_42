/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:19:10 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/23 20:23:49 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *data)
{
	t_list	*temp;

	temp = data;
	while (temp != NULL)
	{
		ft_putnbr_fd(temp->content, 1);
		ft_putchar_fd('\t', 1);
		ft_putnbr_fd(temp->index, 1);
		ft_putchar_fd('\n', 1);
		temp = temp->next;
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	if (ac < 3)
		return (1);
	a = NULL;
	a = read_numbers(av, a);
	set_index(a);
	print_list(a);
	ft_putstr_fd("-------\n", 1);
	sort_4_5nums(&a, &b);
	ft_putstr_fd("-------\n", 1);
	print_list(a);
}
