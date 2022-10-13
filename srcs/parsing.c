/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:22:21 by engo              #+#    #+#             */
/*   Updated: 2022/10/12 16:34:53 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_back_dlist(t_dlist *l, t_node *element)
{
	if (is_empty_list(l))
	{
		l->begin = element;
		l->end = element;
		l->len++;
		element->back = NULL;
		element->next = NULL;
	}
	else
	{
		element->next = NULL;
		element->back = l->end;
		l->end->next = element;
		l->end = element;
	}
	l->len++;
	maj_position(l);
	return ;
}

void	push_front_dlist(t_dlist *l, t_node *element)
{
	if (is_empty_list(l))
	{
		l->begin = element;
		l->end = element;
		element->back = NULL;
		element->next = NULL;
	}
	else
	{
		element->back = NULL;
		element->next = l->begin;
		l->begin->back = element;
		l->begin = element;
	}
	l->len++;
	maj_position(l);
	return ;
}

t_node	*pop_back_dlist(t_dlist *l)
{
	t_node	*tmp;

	if (l->len > 1)
	{
		tmp = l->end;
		l->end = l->end->back;
		l->end->next = NULL;
		l->len--;
	}
	else
	{
		tmp = l->end;
		l->end = NULL;
		l->begin = NULL;
		l->len = 0;
	}
	maj_position(l);
	return (tmp);
}

t_node	*pop_front_dlist(t_dlist *l)
{
	t_node	*tmp;

	if (l->len > 1)
	{
		tmp = l->begin;
		l->begin = l->begin->next;
		l->begin->back = NULL;
		l->len--;
	}
	else
	{
		tmp = l->begin;
		l->begin = NULL;
		l->end = NULL;
		l->len = 0;
	}
	maj_position(l);
	return (tmp);
}
