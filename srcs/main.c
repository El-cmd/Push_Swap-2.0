/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:41:46 by engo              #+#    #+#             */
/*   Updated: 2022/09/21 14:18:25 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	all;
	(void)	ac;
	(void)	av;
	all.stack_a = new_lst();
	all.stack_b = new_lst();
	push_back_dlist(all.stack_a, 5);
	push_back_dlist(all.stack_a, 6);
	push_back_dlist(all.stack_a, 2);
	printlist(all.stack_a);
}