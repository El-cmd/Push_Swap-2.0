/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:33:46 by engo              #+#    #+#             */
/*   Updated: 2022/10/05 22:54:21 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_dlist *stack_a)
{
	int	tmp;
	int	i;
	int	p;

	tmp = stack_a->begin->value;
	i = stack_a->begin->index;
	p = stack_a->begin->position;
	stack_a->begin->index = stack_a->begin->next->index;
	stack_a->begin->position = stack_a->begin->next->position;
	stack_a->begin->value = stack_a->begin->next->value;
	stack_a->begin->next->index = i;
	stack_a->begin->next->position = p;
	stack_a->begin->next->value = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_dlist *stack_b)
{
	int	tmp;
	int	i;
	int	p;

	tmp = stack_b->begin->value;
	i = stack_b->begin->index;
	p = stack_b->begin->position;
	stack_b->begin->index = stack_b->begin->next->index;
	stack_b->begin->position = stack_b->begin->next->position;
	stack_b->begin->value = stack_b->begin->next->value;
	stack_b->begin->next->index = i;
	stack_b->begin->next->position = p;
	stack_b->begin->next->value = tmp;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;
	int	p;

	tmp = stack_a->begin->value;
	i = stack_a->begin->index;
	p = stack_a->begin->position;
	stack_a->begin->index = stack_a->begin->next->index;
	stack_a->begin->position = stack_a->begin->next->position;
	stack_a->begin->value = stack_a->begin->next->value;
	stack_a->begin->next->index = i;
	stack_a->begin->next->position = p;
	stack_a->begin->next->value = tmp;
	tmp = stack_b->begin->value;
	i = stack_b->begin->index;
	p = stack_b->begin->position;
	stack_b->begin->value = stack_b->begin->next->value;
	stack_b->begin->index = stack_b->begin->next->index;
	stack_b->begin->position = stack_b->begin->next->position;
	stack_b->begin->next->value = tmp;
	stack_b->begin->next->index = i;
	stack_b->begin->next->position = p;
	ft_putstr_fd("ss\n", 1);
}
