/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:37:32 by engo              #+#    #+#             */
/*   Updated: 2022/10/19 12:47:50 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist	*new_lst(void)
{
	t_dlist	*lst;

	lst = malloc(sizeof(t_dlist));
	if (!lst)
		return (NULL);
	lst->begin = NULL;
	lst->end = NULL;
	lst->len = 0;
	return (lst);
}

int	is_empty_list(t_dlist *l)
{
	int	i;

	i = 0;
	if (l->begin == NULL)
	{
		i++;
		return (i);
	}
	return (0);
}

void	push_back_list_for_a(t_dlist *l, int x)
{
	t_node	*element;

	element = malloc(sizeof(*element));
	if (!element)
		return ;
	element->value = x;
	element->next = NULL;
	element->back = NULL;
	if (l->len == 0)
	{
		l->len = 0;
		l->begin = element;
		l->end = element;
	}
	else
	{
		l->end->next = element;
		element->back = l->end;
		l->end = element;
	}
	maj_position(l);
	l->len++;
}

int	push_all_a(char **av, t_dlist *stack_a)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (check_arg(av))
			return (1);
		push_back_list_for_a(stack_a, ft_atol(av[i]));
		stack_a->end->target_pos = -1;
		stack_a->end->index = 0;
		i++;
	}
	return (0);
}
