/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:14:40 by engo              #+#    #+#             */
/*   Updated: 2022/10/03 15:35:29 by engo             ###   ########.fr       */
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
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->begin->next)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (tmp == stack_a->end->back)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	three_sort(stack_a);
	pa(stack_a, stack_b);
}

void	three_sort_secondpart(t_dlist *stack_a)
{
	t_node	*element;

	element = stack_a->begin;
	if (element->next->value > element->value
		&& element->next->value > element->next->next->value)
	{
		rra(stack_a);
		sa(stack_a);
	}
}

void	three_sort(t_dlist *stack_a)
{
	t_node	*element;

	element = stack_a->begin;
	if (element->value > element->next->value
		&& element->value > element->next->next->value)
		ra(stack_a);
	element = stack_a->begin;
	if (element->value > element->next->value)
		sa(stack_a);
	else if (element->next->value > element->value
		&& element->next->value > element->next->next->value
		&& element->value > element->next->next->value)
		rra(stack_a);
	three_sort_secondpart(stack_a);
}

void	two_sort(t_dlist *stack_a)
{
	t_node	*element;

	element = stack_a->begin;
	if (element->value > element->next->value)
		sa(stack_a);
}
