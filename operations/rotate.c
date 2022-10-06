/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:31:34 by engo              #+#    #+#             */
/*   Updated: 2022/10/05 22:35:03 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_dlist *stack_a)
{
	int	tmp;
	int	i;

	tmp = stack_a->begin->value;
	i = stack_a->begin->index;
	pop_front_dlist(stack_a);
	push_back_dlist(stack_a, tmp);
	stack_a->end->index = i;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_b->begin->value;
	i = stack_b->begin->index;
	pop_front_dlist(stack_b);
	push_back_dlist(stack_b, tmp);
	stack_b->end->index = i;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_a->begin->value;
	i = stack_a->begin->index;
	pop_front_dlist(stack_a);
	push_back_dlist(stack_a, tmp);
	stack_a->end->index = i;
	ft_putstr_fd("ra\n", 1);
	tmp = stack_b->begin->value;
	i = stack_b->begin->index;
	pop_front_dlist(stack_b);
	push_back_dlist(stack_b, tmp);
	stack_b->end->index = i;
	ft_putstr_fd("rb\n", 1);
}
