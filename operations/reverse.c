/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:07 by engo              #+#    #+#             */
/*   Updated: 2022/10/12 16:35:23 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_dlist *stack_a, t_dlist *stack_b)
{
	int		i;
	t_node	*t;

	i = stack_a->end->index;
	t = pop_back_dlist(stack_a);
	push_front_dlist(stack_a, t);
	stack_a->begin->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*t;
	int		i;

	i = stack_b->end->index;
	t = pop_back_dlist(stack_b);
	push_front_dlist(stack_b, t);
	stack_b->begin->index = i;
	find_target(stack_a, stack_b);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*t;
	int		i;

	i = stack_a->end->index;
	t = pop_back_dlist(stack_a);
	push_front_dlist(stack_a, t);
	stack_a->begin->index = i;
	i = stack_b->end->index;
	t = pop_back_dlist(stack_b);
	push_front_dlist(stack_b, t);
	stack_b->begin->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("rrr\n", 1);
}
