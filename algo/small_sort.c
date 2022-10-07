/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:14:40 by engo              #+#    #+#             */
/*   Updated: 2022/10/07 01:18:29 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	smallest_a(t_dlist *stack_a)
{
	t_node	*tmp;
	int		i;

	i = stack_a->begin->value;
	tmp = stack_a->begin->next;
	while (tmp)
	{
		if (tmp->value < i)
			i = tmp->value;
		tmp = tmp->next;
	}
	return (i);
}

void	four_sort(t_dlist *stack_a, t_dlist *stack_b)
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
	else if (tmp == stack_a->end->back)
	{
		rra(stack_a, stack_b);
		rra(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	three_sort(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	three_sort_secondpart(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*element;

	element = stack_a->begin;
	if (element->next->value > element->value
		&& element->next->value > element->next->next->value)
	{
		rra(stack_a, stack_b);
		sa(stack_a, stack_b);
	}
}

void	three_sort(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*element;

	element = stack_a->begin;
	if (element->value > element->next->value
		&& element->value > element->next->next->value)
		ra(stack_a, stack_b);
	element = stack_a->begin;
	if (element->value > element->next->value)
		sa(stack_a, stack_b);
	else if (element->next->value > element->value
		&& element->next->value > element->next->next->value
		&& element->value > element->next->next->value)
		rra(stack_a, stack_b);
	three_sort_secondpart(stack_a, stack_b);
}

void	two_sort(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*element;

	element = stack_a->begin;
	if (element->value > element->next->value)
		sa(stack_a, stack_b);
}
