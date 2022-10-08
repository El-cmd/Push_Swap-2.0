/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:07 by engo              #+#    #+#             */
/*   Updated: 2022/10/08 12:47:57 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_a->end->value;
	i = stack_a->end->index;
	pop_back_dlist(stack_a);
	push_front_dlist(stack_a, tmp);
	stack_a->begin->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_b->end->value;
	i = stack_b->end->index;
	pop_back_dlist(stack_b);
	push_front_dlist(stack_b, tmp);
	stack_b->begin->index = i;
	find_cost_b(stack_b);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_a->end->value;
	i = stack_a->end->index;
	pop_back_dlist(stack_a);
	push_front_dlist(stack_a, tmp);
	stack_a->begin->index = i;
	tmp = stack_b->end->value;
	i = stack_b->end->index;
	pop_back_dlist(stack_b);
	push_front_dlist(stack_b, tmp);
	stack_b->begin->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_cost_b(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
