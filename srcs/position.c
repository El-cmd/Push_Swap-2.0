/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:12:15 by engo              #+#    #+#             */
/*   Updated: 2022/10/08 13:10:26 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	maj_position(t_dlist *stack_a)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = stack_a->begin;
	while (tmp)
	{
		tmp->position = i;
		i++;
		tmp = tmp->next;
	}
}

void	assign_index_s(t_dlist *sa, t_node *t, t_node *h, int len)
{
	int	value;

	while (len > 0)
	{
		t = sa->begin;
		value = INT_MIN;
		h = NULL;
		while (t)
		{
			if (t->value == INT_MIN && t->index == 0)
				t->index = 1;
			if (t->value > value && t->index == 0)
			{
				value = t->value;
				h = t;
				t = sa->begin;
			}
			else
				t = t->next;
		}
		if (h != NULL)
			h->index = len;
		len--;
	}
}

void	assign_index(t_dlist *sa)
{
	t_node	*t;
	t_node	*h;
	int		len;

	h = NULL;
	t = sa->begin;
	len = sa->len;
	assign_index_s(sa, t, h, len);
}

int	biggest(t_dlist *stack_a)
{
	t_node	*tmp;
	int		i;

	i = stack_a->begin->value;
	tmp = stack_a->begin->next;
	while (tmp)
	{
		if (tmp->value > i)
			i = tmp->value;
		tmp = tmp->next;
	}
	return (i);
}

t_node	*return_biggest(t_dlist *stack_a)
{
	t_node	*tmp;

	tmp = stack_a->begin;
	while (biggest(stack_a) != tmp->value)
		tmp = tmp->next;
	return (tmp);
}
