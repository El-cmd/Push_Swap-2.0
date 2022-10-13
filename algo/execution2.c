/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:00:53 by engo              #+#    #+#             */
/*   Updated: 2022/10/13 17:01:37 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	final_execution(t_node *tmpa, t_node *tmpb, t_dlist *a, t_dlist *b)
{
	if (tmpb->cost_b == 0 && tmpa->cost_a < 0)
		rra(a, b);
	else if (tmpb->cost_b == 0 && tmpa->cost_a > 0)
		ra(a, b);
	else if (tmpb->cost_b < 0 && tmpa->cost_a == 0)
		rrb(a, b);
	else if (tmpb->cost_b > 0 && tmpa->cost_a == 0)
		rb(a, b);
	else if (tmpb->cost_b < 0 && tmpa->cost_a < 0)
		rrr(a, b);
	else if (tmpb->cost_b > 0 && tmpa->cost_a > 0)
		rr(a, b);
	else if (tmpb->cost_b < 0 && tmpa->cost_a > 0)
	{
		rrb(a, b);
		ra(a, b);
	}
	else if (tmpb->cost_b > 0 && tmpa->cost_a < 0)
	{
		rb(a, b);
		rra(a, b);
	}
}