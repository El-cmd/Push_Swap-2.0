/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:50:29 by engo              #+#    #+#             */
/*   Updated: 2022/10/12 15:55:05 by engo             ###   ########.fr       */
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

int	find_target_sup(t_dlist *stack_a, t_node *tmpb)
{
	t_node	*tmpa;

	tmpa = return_biggest(stack_a);
	if (tmpa->index < tmpb->index)
	{
		tmpa = return_smallest(stack_a);
		tmpb->target_pos = tmpa->position;
		return (1);
	}
	return (0);
}

void	find_target(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*tmpa;
	t_node	*tmpb;
	int		index_min;

	tmpa = stack_a->begin;
	if (stack_b->len == 0)
		return ;
	tmpb = stack_b->begin;
	while (tmpb)
	{
		while (find_target_sup(stack_a, tmpb) && tmpb->next)
			tmpb = tmpb->next;
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
		tmpb = tmpb->next;
		tmpa = stack_a->begin;
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
			if (stack_b->len > 1)
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
			if (stack_a->len > 1)
				tmpa->cost_a = tmpa->position * -1;
			else
				tmpa->cost_a = tmpa->position - stack_a->len;
		}
		tmpa = tmpa->next;
	}
}
