/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:11:40 by engo              #+#    #+#             */
/*   Updated: 2022/09/19 10:16:37 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	free_pile(t_pile *stack)
{
	t_element	*a;
	t_element	*element;

	current = stack->lst;
	while (a)
	{
		element = a;
		a = current->next;
		free(element);
	}
	free(a);
	free(stack);
	return ;
}

void	free_tab(char **str)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return ;
}

void	free_tri(t_move *sort)
{
	free(sort);
	sort = NULL;
	return ;
}
