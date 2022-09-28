/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:14:40 by engo              #+#    #+#             */
/*   Updated: 2022/09/27 14:41:38 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	four_sortsecondpart

void	four_sort(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node	*element;
	t_node	*element_2;

	pb(stack_a, stack_b);
	element_2 = stack_b->begin;
	three_sort(stack_a);
	pa(stack_a, stack_b);
	element = stack_a->begin;
	element = stack_a->begin;
	if (element_2->value > element->value \
		&& element_2->value < element->next->value)
	{
		sa(stack_a);
		return ;
	}
	element = stack_a->begin;
	if (element_2->value > element->next->value \
		&& element_2->value < element->next->next->value)
	{
		rra(stack_a);
		sa(stack_a);
		ra(stack_a);
		ra(stack_a);
		return ;
	}
	element = stack_a->begin;
	if (element_2->value > element->value)
	{
		ra(stack_a);
		return ;
	}
	if (element_2->value < element->value)
		return ;
}

void	three_sort_secondpart(t_dlist *stack_a)
{
	t_node	*element;

	element = stack_a->begin;
	if (element->next->value > element->value \
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
	if (element->value > element->next->value \
			&& element->value > element->next->next->value)
		ra(stack_a);
	element = stack_a->begin;
	if (element->value > element->next->value)
		sa(stack_a);
	else if (element->next->value > element->value \
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