/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:24:11 by engo              #+#    #+#             */
/*   Updated: 2022/10/08 17:11:57 by vloth            ###   ########.fr       */
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
	rra(stack_a, stack_b);
	rra(stack_a, stack_b);
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
		rra(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->begin->next)
	{
		sa(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->end->back->back)
	{
		ra(stack_a, stack_b);
		ra(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->end->back)
		five_sort_secondpart(stack_a, stack_b);
	four_sort(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	final_execution(t_node *tmpa, t_node *tmpb, t_dlist *a, t_dlist *b)
{
	if (tmpb->cost_b == 0 && tmpa->cost_a < 0)
		rra(a, b);
	else if (tmpb->cost_b == 0 && tmpa->cost_a > 0)
		ra(a, b);
	else if (tmpb->cost_b < 0 && tmpa->cost_a == 0)
		rrb(a, b);
	else if (tmpb->cost_b > 0 && tmpa->cost_a == 0)
		rb(a, b);
	else if (tmpb->cost_b < 0 && tmpa->cost_a < 0)
		rrr(a, b);
	else if (tmpb->cost_b > 0 && tmpa->cost_a > 0)
		rr(a, b);
	else if (tmpb->cost_b < 0 && tmpa->cost_a > 0)
	{
		rrb(a, b);
		ra(a, b);
	}
	else if (tmpb->cost_b > 0 && tmpa->cost_a < 0)
	{
		rb(a, b);
		rra(a, b);
	}
}
