/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:22:21 by engo              #+#    #+#             */
/*   Updated: 2022/10/11 17:37:19 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_back_dlist(t_dlist *lst, int i)
{
	t_node	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return ;
	element->value = i;
	element->next = NULL;
	element->back = NULL;
	if (lst->len == 0)
	{
		lst->len = 0;
		lst->begin = element;
		lst->end = element;
	}
	else
	{
		lst->end->next = element;
		element->back = lst->end;
		lst->end = element;
	}
	lst->len++;
	element->position = lst->len;
	maj_position(lst);
	return ;
}

void	push_front_dlist(t_dlist *lst, int i)
{
	t_node	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return ;
	element->value = i;
	element->next = NULL;
	element->back = NULL;
	if (lst->len == 0)
	{
		lst->len = 0;
		lst->begin = element;
		lst->end = element;
	}
	else
	{
		lst->begin->back = element;
		element->next = lst->begin;
		lst->begin = element;
	}
	lst->len++;
	maj_position(lst);
	return ;
}

t_dlist	*pop_back_dlist(t_dlist *lst)
{
	t_node	*tmp;

	if (lst->len == 0)
		return (lst);
	if (lst->begin == lst->end)
	{
		free(lst);
		return (new_lst());
	}
	tmp = lst->end;
	lst->end = lst->end->back;
	lst->end->next = NULL;
	tmp->next = NULL;
	tmp->back = NULL;
	free(tmp);
	tmp = NULL;
	lst->len--;
	lst->end->position = lst->len;
	maj_position(lst);
	return (lst);
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

t_dlist	*clear_dlist(t_dlist *lst)
{
	while (lst->len == 0)
		lst = pop_back_dlist(lst);
	return (new_lst());
}
