/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:33:46 by engo              #+#    #+#             */
/*   Updated: 2022/09/29 16:04:26 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_dlist *stack_a)
{
	int	tmp;

	tmp = stack_a->begin->value;
	stack_a->begin->value = stack_a->begin->next->value;
	stack_a->begin->next->value = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_dlist *stack_b)
{
	int	tmp;

	tmp = stack_b->begin->value;
	stack_b->begin->value = stack_b->begin->next->value;
	stack_b->begin->next->value = tmp;
	ft_putstr_fd("sb\n", 1);
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
	ft_putstr_fd("ss\n", 1);
}
