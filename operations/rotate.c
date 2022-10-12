/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:31:34 by engo              #+#    #+#             */
/*   Updated: 2022/10/12 15:19:40 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*t;
	int	i;

	i = stack_a->begin->index;
	t = pop_front_dlist(stack_a);
	push_back_dlist(stack_a, t);
	stack_a->end->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*t;
	int		i;

	i = stack_b->begin->index;
	t = pop_front_dlist(stack_b);
	push_back_dlist(stack_b, t);
	stack_b->end->index = i;
	find_target(stack_a, stack_b);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*t;
	int		i;

	i = stack_a->begin->index;
	t = pop_front_dlist(stack_a);
	push_back_dlist(stack_a, t);
	stack_a->end->index = i;
	i = stack_b->begin->index;
	t = pop_front_dlist(stack_b);
	push_back_dlist(stack_b, t);
	stack_b->end->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("rr\n", 1);
}
