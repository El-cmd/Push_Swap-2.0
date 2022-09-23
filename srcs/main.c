/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:41:46 by engo              #+#    #+#             */
/*   Updated: 2022/09/23 11:37:00 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*int	main(int ac, char **av)
{
	t_stack	all;

	all.stack_a = new_lst();
	all.stack_b = new_lst();
}*/

int	main(int ac, char **av)
{
	t_stack	all;

	(void) ac;
	(void) av;
	all.stack_a = new_lst();
	all.stack_b = new_lst();
	push_front_dlist(all.stack_a, 5);
	push_front_dlist(all.stack_a, 6);
	push_front_dlist(all.stack_a, 2);
	printlist(all.stack_a);
	ft_putstr_fd("\n", 0);
	push_front_dlist(all.stack_b, 9);
	push_front_dlist(all.stack_b, 7);
	push_front_dlist(all.stack_b, 1);
	printlist(all.stack_b);
	ft_putstr_fd("\n", 0);
	rrr(all.stack_a, all.stack_b);
	printlist(all.stack_a);
	ft_putstr_fd("\n", 0);
	printlist(all.stack_b);
	ft_putstr_fd("\n", 0);
}
