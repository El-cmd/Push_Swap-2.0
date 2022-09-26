/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:14:40 by engo              #+#    #+#             */
/*   Updated: 2022/09/26 15:04:46 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	five_sort(t_dlist *stack_a, t_dlist *stack_b)
{
	t_node *element;

	element = stack_a->begin;
	
	if (element->value )
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
	element = stack_a->begin;
	if (element->next->value > element->value \
		&& element->next->value > element->next->next->value)
	{
		rra(stack_a);
		sa(stack_a);
	}
}

void	two_sort(t_dlist *stack_a)
{
	t_node	*element;

	element = stack_a->begin;

	if (element->value > element->next->value)
		sa(stack_a);
}