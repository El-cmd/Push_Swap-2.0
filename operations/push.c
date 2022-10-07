/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:54:57 by engo              #+#    #+#             */
/*   Updated: 2022/10/07 00:54:33 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_dlist *stack_a, t_dlist *stack_b)
{
	int	i;

	i = stack_b->begin->index;
	if (stack_b->len == 0)
		return ;
	push_front_dlist(stack_a, stack_b->begin->value);
	stack_a->begin->index = i;
	pop_front_dlist(stack_b);
	find_target(stack_a, stack_b);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_dlist *stack_a, t_dlist *stack_b)
{
	int	i;

	i = stack_a->begin->index;
	if (stack_a->len == 0)
		return ;
	push_front_dlist(stack_b, stack_a->begin->value);
	stack_b->begin->index = i;
	pop_front_dlist(stack_a);
	find_target(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}
