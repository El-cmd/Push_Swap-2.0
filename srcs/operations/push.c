/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>	                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:54:57 by engo              #+#    #+#             */
/*   Updated: 2022/10/07 00:54:33 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_dlist *stack_a, t_dlist *stack_b)
{
	int		i;
	t_node	*tmpb;

	i = stack_b->begin->index;
	tmpb = pop_front_dlist(stack_b);
	push_front_dlist(stack_a, tmpb);
	stack_a->begin->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_dlist *stack_a, t_dlist *stack_b)
{
	int		i;
	t_node	*tmpa;

	i = stack_a->begin->index;
	tmpa = pop_front_dlist(stack_a);
	push_front_dlist(stack_b, tmpa);
	stack_b->begin->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}
