/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nakebli <nakebli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:46:19 by nakebli           #+#    #+#             */
/*   Updated: 2023/02/23 20:26:49 by nakebli          ###   ########.fr       */
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
int		find_position(t_list *a, int idx);

// RULES
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ss(t_list **a, t_list **b);
void	rr(t_list **a, t_list **b);
void	rrr(t_list **a, t_list **b);
void	sa(t_list **a);
void	sb(t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rra(t_list **b);
void	rrb(t_list **b);

//SORT
void	sort_3nums(t_list **a);
void	sort_4_5nums(t_list **a, t_list **b);

// PRINT
void	print_list(t_list *data);

#endif