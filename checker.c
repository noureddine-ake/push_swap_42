/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:45:28 by nakebli           #+#    #+#             */
/*   Updated: 2023/03/16 22:52:49 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static int	set_rule(char *s, t_list **a, t_list **b)
{
	if (ft_strnstr(s, "sa\n", 3))
		return (sa(a, 1), 1);
	else if (ft_strnstr(s, "sb\n", 3))
		return (sb(b, 1), 1);
	else if (ft_strnstr(s, "ss\n", 3))
		return (ss(a, b, 1), 1);
	else if (ft_strnstr(s, "pa\n", 3))
		return (pa(a, b, 1), 1);
	else if (ft_strnstr(s, "pb\n", 3))
		return (pb(a, b, 1), 1);
	else if (ft_strnstr(s, "ra\n", 3))
		return (ra(a, 1), 1);
	else if (ft_strnstr(s, "rb\n", 3))
		return (rb(b, 1), 1);
	else if (ft_strnstr(s, "rr\n", 3))
		return (rr(a, b, 1), 1);
	else if (ft_strnstr(s, "rra\n", 4))
		return (rra(a, 1), 1);
	else if (ft_strnstr(s, "rrb\n", 4))
		return (rrb(b, 1), 1);
	else if (ft_strnstr(s, "rrr\n", 4))
		return (rrr(a, b, 1), 1);
	else
		return (0);
}

void	lk()
{
	system("leaks checker");
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	*s;

	atexit(lk);
	if (ac < 2)
		exit_failure("\x1B[31menter some numbers to sort");
	a = read_numbers(av, a);
	set_index(a);
	s = get_next_line(0);
	while (s)
	{
		if (!set_rule(s, &a, &b))
		{
			free(s);
			free_all(a);
			exit_failure("\x1B[31mError!");
		}
		free(s);
		s = get_next_line(0);
	}
	if (!ft_is_sorted(&a))
		write(1, "\x1B[31mKO\n", 8);
	else
		write(1, "\x1B[32mOK\n", 8);
	free_all(a);
}
