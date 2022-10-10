/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:23:53 by engo              #+#    #+#             */
/*   Updated: 2022/10/10 23:35:18 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printlist(t_dlist *str)
{
	t_node	*element;

	if (!str)
		return ;
	element = str->begin;
	while (element)
	{
		printf("%d\n", element->value);
		element = element->next;
	}
}

void	free_list(t_dlist *la)
{
	t_node	*tmp;

	tmp = la->begin;
	while (tmp)
	{
		tmp = pop_front_dlist(la);
		free(tmp);
	}
	free(la);
}
