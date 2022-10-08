/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:11:55 by vloth             #+#    #+#             */
/*   Updated: 2022/10/08 14:22:11 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*find_peer(t_node *tmpb, t_dlist *stack_a)
{
	t_node	*tmpa;

	tmpa = stack_a->begin;
	while (tmpa)
	{
		if (tmpb->target_pos == tmpa->position)
			return (tmpa);
		tmpa = tmpa->next;
	}
	return (NULL);
}

void	find_total_cost(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*tmpa;
	t_node	*tmpb;
	int		a;
	int		b;

	if (stack_b->len == 0)
		return ;
	tmpb = stack_b->begin;
	while (tmpb)
	{
		tmpa = find_peer(tmpb, stack_a);
		a = tmpa->cost_a;
		b = tmpb->cost_b;
		if (a < 0)
			a = a * (-1);
		if (b < 0)
			b = b * (-1);
		tmpb->total_cost = a + b;
		tmpb = tmpb->next;
	}
}

t_node	*find_the_smallest_cost(t_dlist *stack_b)
{
	t_node	*tmpb;
	int		smallest;

	if (stack_b->len == 0)
		return (NULL);
	tmpb = stack_b->begin;
	smallest = INT_MAX;
	while (tmpb)
	{
		if (smallest > tmpb->total_cost)
			smallest = tmpb->total_cost;
		tmpb = tmpb->next;
	}
	tmpb = stack_b->begin;
	while (tmpb->total_cost != smallest)
		tmpb = tmpb->next;
	return (tmpb);
}

