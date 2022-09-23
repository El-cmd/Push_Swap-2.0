/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:41:46 by engo              #+#    #+#             */
/*   Updated: 2022/09/23 14:09:36 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_all_a(char **av, t_dlist *stack_a)
{
	int	i;

	i = 1;
	while (av[i])
	{
		if (check_arg(av))
			return (1);
		push_back_dlist(stack_a, ft_atol(av[i]));
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	all;

	all.stack_a = new_lst();
	all.stack_b = new_lst();
	if (push_all_a(av, all.stack_a))
		return (-1);
	sa(all.stack_a);
	printlist(all.stack_a);
}
