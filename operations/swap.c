/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:33:46 by engo              #+#    #+#             */
/*   Updated: 2022/09/22 13:14:45 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_dlist *stack_a)
{
	int	tmp;

	tmp = stack_a->begin->value;
	stack_a->begin->value = stack_a->begin->next->value;
	stack_a->begin->next->value = tmp;
	ft_putstr("sa\n");
}

void	sb(t_dlist *stack_b)
{
	int	tmp;

	tmp = stack_b->begin->value;
	stack_b->begin->value = stack_b->begin->next->value;
	stack_b->begin->next->value = tmp;
	ft_putstr("sb\n");
}

void	ss(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;

	tmp = stack_a->begin->value;
	stack_a->begin->value = stack_a->begin->next->value;
	stack_a->begin->next->value = tmp;

	tmp = stack_b->begin->value;
	stack_b->begin->value = stack_b->begin->next->value;
	stack_b->begin->next->value = tmp;
	ft_putstr("ss\n");
}

