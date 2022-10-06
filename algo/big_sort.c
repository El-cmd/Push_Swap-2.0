/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:28:41 by vloth             #+#    #+#             */
/*   Updated: 2022/10/06 14:59:06 by vloth            ###   ########.fr       */
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
			ra(stack_a);
			p++;
		}
		else
			pb(stack_a, stack_b);
		tmp = stack_a->begin;
	}
	while (stack_a->len > 3)
		pb(stack_a, stack_b);
	three_sort(stack_a);
}

void	find_target(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node *tmpa;
	t_node *tmpb;

	tmpa = stack_a->begin;
	tmpb = stack_b->begin;
	
}
