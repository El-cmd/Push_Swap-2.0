/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:50:29 by engo              #+#    #+#             */
/*   Updated: 2022/10/14 15:22:45 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	median_index(int ac, t_dlist *stack_a, t_dlist *stack_b)
{
	int		i;
	t_node	*tmp;
	int		p;

	p = 0;
	i = (ac - 1) / 2;
	tmp = stack_a->begin;
	while (p < 3 && tmp)
	{
		if (tmp->index > i)
		{
			ra(stack_a, stack_b);
			p++;
		}
		else
			pb(stack_a, stack_b);
		tmp = stack_a->begin;
	}
	while (stack_a->len > 3)
		pb(stack_a, stack_b);
	three_sort(stack_a, stack_b);
}

void	find_target_ff(t_dlist *stack_a, t_node *tmpb)
{
	t_node	*tmpa;
	int		index_min;

	tmpa = stack_a->begin;
	index_min = INT_MAX;
	while (tmpa)
	{
		if (tmpb->index < tmpa->index && tmpa->index < index_min)
		{
			tmpb->target_pos = tmpa->position;
			index_min = tmpa->index;
		}
		tmpa = tmpa->next;
	}
}

void	find_target(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*tmpa;
	t_node	*tmpb;

	tmpb = stack_b->begin;
	while (tmpb)
	{
		if (tmpb->value > biggest(stack_a))
		{
			tmpa = return_smallest(stack_a);
			tmpb->target_pos = tmpa->position;
		}
		else
			find_target_ff(stack_a, tmpb);
		tmpb = tmpb->next;
	}
}

void	find_cost_b(t_dlist *stack_b)
{
	t_node	*tmpb;
	int		median;

	if (stack_b->len == 0)
		return ;
	tmpb = stack_b->begin;
	median = stack_b->len / 2;
	while (tmpb)
	{
		if (tmpb->position < median)
			tmpb->cost_b = tmpb->position;
		else
		{
			if (stack_b->len < 1)
				tmpb->cost_b = tmpb->position * -1;
			else
				tmpb->cost_b = tmpb->position - stack_b->len;
		}
		tmpb = tmpb->next;
	}
}

void	find_cost_a(t_dlist *stack_a)
{
	t_node	*tmpa;
	int		median;

	tmpa = stack_a->begin;
	median = stack_a->len / 2;
	while (tmpa)
	{
		if (tmpa->position < median)
			tmpa->cost_a = tmpa->position;
		else
		{
			if (stack_a->len < 1)
				tmpa->cost_a = tmpa->position * -1;
			else
				tmpa->cost_a = tmpa->position - stack_a->len;
		}
		tmpa = tmpa->next;
	}
}
