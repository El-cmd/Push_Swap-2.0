/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse .c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:18:07 by engo              #+#    #+#             */
/*   Updated: 2022/09/23 11:23:28 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_dlist *stack_a)
{
	int	tmp;

	tmp = stack_a->end->value;
	pop_back_dlist(stack_a);
	push_front_dlist(stack_a, tmp);
	ft_putstr_fd("rra\n", 0);
}

void	rrb(t_dlist *stack_b)
{
	int	tmp;

	tmp = stack_b->end->value;
	pop_back_dlist(stack_b);
	push_front_dlist(stack_b, tmp);
	ft_putstr_fd("rrb\n", 0);
}

void	rrr(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;

	tmp = stack_a->end->value;
	pop_back_dlist(stack_a);
	push_front_dlist(stack_a, tmp);
	tmp = stack_b->end->value;
	pop_back_dlist(stack_b);
	push_front_dlist(stack_b, tmp);
	ft_putstr_fd("rrr\n", 0);
}