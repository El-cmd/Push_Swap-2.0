/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>	                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:41:46 by engo              #+#    #+#             */
/*   Updated: 2022/10/07 16:10:51 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	main_s(t_dlist *stack_a, t_dlist *stack_b, int ac)
{
	if (ac == 3)
		two_sort(stack_a, stack_b);
	else if (ac == 4)
		three_sort(stack_a, stack_b);
	else if (ac == 5)
		four_sort(stack_a, stack_b);
	else if (ac == 6)
		five_sort(stack_a, stack_b);
	else
	{
		median_index(ac, stack_a, stack_b);
		execution(stack_a, stack_b);
		final(stack_a, stack_b);
	}
}

int	main(int ac, char **av)
{
	t_stack	all;

	if (ac == 1)
		return (0);
	check_arg(av);
	all.stack_a = new_lst();
	all.stack_b = new_lst();
	if (push_all_a(av, all.stack_a))
		return (-1);
	if (all.stack_a == NULL)
		return (-1);
	check_duplicate(all.stack_a, all.stack_b);
	if (is_already_sorted(all.stack_a))
	{
		free_list(all.stack_a);
		free_list(all.stack_b);
		return (1);
	}
	assign_index(all.stack_a);
	main_s(all.stack_a, all.stack_b, ac);
	free_list(all.stack_a);
	free_list(all.stack_b);
	exit(0);
}
