/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:12:15 by engo              #+#    #+#             */
/*   Updated: 2022/10/03 17:18:58 by engo             ###   ########.fr       */
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
lseek