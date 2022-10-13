/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:23:53 by engo              #+#    #+#             */
/*   Updated: 2022/10/12 16:34:04 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
