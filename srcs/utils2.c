/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:22:21 by engo              #+#    #+#             */
/*   Updated: 2022/09/21 14:16:38 by engo             ###   ########.fr       */
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
	if (empty_lst(lst))
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
	return ;
}

t_dlist	*pop_back_dlist(t_dlist *lst)
{
	t_node	*tmp;

	if (!empty_lst(lst))
		return (new_lst());
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
	return (lst);
}

t_dlist	*pop_front_dlist(t_dlist *lst)
{
	t_node	*tmp;

	if (!empty_lst(lst))
		return (new_lst());
	if (lst->begin == lst->end)
	{
		free(lst);
		return (new_lst());
	}
	tmp = lst->begin;
	lst->begin = lst->begin->next;
	lst->begin->back = NULL;
	tmp->next = NULL;
	tmp->back = NULL;
	free(tmp);
	tmp = NULL;
	lst->len--;
	return (lst);
}

t_dlist	*clear_dlist(t_dlist *lst)
{
	while (empty_lst(lst))
		lst = pop_back_dlist(lst);
	return (new_lst());
}

void	printlist(t_dlist *str)
{
	t_node	*element;

	element = str->begin;
	while (element)
	{
		printf("%d\n", element->value);
		element = element->next;
	}
}