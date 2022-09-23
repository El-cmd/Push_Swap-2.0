/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:41:46 by engo              #+#    #+#             */
/*   Updated: 2022/09/22 14:27:56 by engo             ###   ########.fr       */
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
	push_front_dlist(all.stack_b, 2);
	printlist(all.stack_a);
	printlist(all.stack_b);
	pa(all.stack_a, all.stack_b);
	printlist(all.stack_a);
	printlist(all.stack_b);
}
