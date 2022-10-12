/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:33:46 by engo              #+#    #+#             */
/*   Updated: 2022/10/12 15:19:56 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_a->begin->value;
	i = stack_a->begin->index;
	stack_a->begin->index = stack_a->begin->next->index;
	stack_a->begin->value = stack_a->begin->next->value;
	stack_a->begin->next->index = i;
	stack_a->begin->next->value = tmp;
	maj_position(stack_a);
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_b->begin->value;
	i = stack_b->begin->index;
	stack_b->begin->index = stack_b->begin->next->index;
	stack_b->begin->value = stack_b->begin->next->value;
	stack_b->begin->next->index = i;
	stack_b->begin->next->value = tmp;
	maj_position(stack_b);
	find_target(stack_a, stack_b);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_a->begin->value;
	i = stack_a->begin->index;
	stack_a->begin->index = stack_a->begin->next->index;
	stack_a->begin->value = stack_a->begin->next->value;
	stack_a->begin->next->index = i;
	stack_a->begin->next->value = tmp;
	tmp = stack_b->begin->value;
	i = stack_b->begin->index;
	stack_b->begin->value = stack_b->begin->next->value;
	stack_b->begin->index = stack_b->begin->next->index;
	stack_b->begin->next->value = tmp;
	stack_b->begin->next->index = i;
	maj_position(stack_a);
	maj_position(stack_b);
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("ss\n", 1);
}
