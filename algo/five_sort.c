/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:24:11 by engo              #+#    #+#             */
/*   Updated: 2022/09/29 16:11:30 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*return_smallest(t_dlist *stack_a)
{
	t_node	*tmp;

	tmp = stack_a->begin;
	while (smallest_a(stack_a) != tmp->value)
		tmp = tmp->next;
	return (tmp);
}

void	five_sort_secondpart(t_dlist *stack_a, t_dlist *stack_b)
{
	rra(stack_a);
	rra(stack_a);
	pb(stack_a, stack_b);
}

void	five_sort(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*tmp;

	tmp = return_smallest(stack_a);
	if (tmp == stack_a->begin)
		pb(stack_a, stack_b);
	else if (tmp == stack_a->end)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->begin->next)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->end->back->back)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->end->back)
		five_sort_secondpart(stack_a, stack_b);
	four_sort(stack_a, stack_b);
	pa(stack_a, stack_b);
}
