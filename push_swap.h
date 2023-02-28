/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:46:19 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/27 21:49:35 by nakebli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

// UTILS
void	free_2d_arr(char **str);
t_list	*read_numbers(char **av, t_list *data);
int		ft_is_sorted(t_list **data);

// PARSING
void	set_index(t_list *data);
int		find_position(t_list **a);
int		find_smallest_index(t_list **a);

// RULES
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ss(t_list **a, t_list **b);
void	rr(t_list **a, t_list **b);
void	rrr(t_list **a, t_list **b);
void	sa(t_list **a, int flag);
void	sb(t_list **b, int flag);
void	ra(t_list **a, int flag);
void	rb(t_list **b, int flag);
void	rra(t_list **b, int flag);
void	rrb(t_list **b, int flag);

//SORT
void	sort_2nums(t_list **a);
void	sort_3nums(t_list **a);
void	sort_4_5nums(t_list **a, t_list **b);
void	big_sort(t_list **a, t_list **b, int div);

// PRINT
void	print_lista(t_list *data);
void	print_listb(t_list *data);

#endif