/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:19:10 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/28 18:21:05 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	print_lista(t_list *data)
{
	t_list	*temp;

	temp = data;
	ft_putstr_fd("----------STACK A---------\n", 1);
	while (temp != NULL)
	{
		ft_putnbr_fd(temp->content, 1);
		ft_putchar_fd('\t', 1);
		ft_putnbr_fd(temp->index, 1);
		ft_putchar_fd('\n', 1);
		temp = temp->next;
	}
}

void	print_listb(t_list *data)
{
	t_list	*temp;

	temp = data;
	ft_putstr_fd("----------STACK B---------\n", 1);
	while (temp != NULL)
	{
		ft_putnbr_fd(temp->content, 1);
		ft_putchar_fd('\t', 1);
		ft_putnbr_fd(temp->index, 1);
		ft_putchar_fd('\n', 1);
		temp = temp->next;
	}
}

void	free_all(t_list *a)
{
	t_list	*tmp;

	while (a->next)
	{
		tmp = a;
		a = a->next;
		free(tmp);
	}
	free(a);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	if (ac < 2)
		exit_failure("enter some numbers to sort");
	a = NULL;
	a = read_numbers(av, a);
	set_index(a);
	if (ft_lstsize(a) == 2)
		sort_2nums(&a);
	else if (ft_lstsize(a) >= 3 && ft_lstsize(a) <= 5)
		sort_4_5nums(&a, &b);
	else if (ft_lstsize(a) > 5 && ft_lstsize(a) <= 200)
		big_sort(&a, &b, 5);
	else if (ft_lstsize(a) > 200 && ft_lstsize(a) <= 500)
		big_sort(&a, &b, 9);
	free_all(a);
}
