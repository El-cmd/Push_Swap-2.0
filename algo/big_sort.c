/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:28:41 by vloth             #+#    #+#             */
/*   Updated: 2022/10/07 21:01:27 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	median_index(int ac, t_dlist *stack_a, t_dlist *stack_b)
{
	int		i;
	t_node	*tmp;
	int		p;

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
	t_node *tmpa;
	t_node *tmpb;
	int		index_min;

	tmpa = stack_a->begin;
	if (stack_b->len == 0)
		return ;
	tmpb = stack_b->begin;
	while (tmpb)
	{
		while (find_target_sup(stack_a, tmpb))
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
