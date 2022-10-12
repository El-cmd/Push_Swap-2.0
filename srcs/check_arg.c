/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 01:58:32 by engo              #+#    #+#             */
/*   Updated: 2022/10/12 16:00:30 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_isdigit(char *arg)
{
	int	i;

	i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	while (arg[i])
	{
		if (!(ft_isdigit(arg[i])))
			return (1);
		i++;
	}
	return (0);
}

int	check_isint(char *arg)
{
	long int	res;

	res = ft_atol(arg);
	if (res > 2147483647 || res < -2147483648)
		return (1);
	return (0);
}

void	check_duplicate(t_dlist *lst)
{
	t_node	*tmp;
	t_node	*tmpp;

	tmp = lst->begin;
	tmpp = lst->begin->next;
	while (tmp != tmpp && tmp && tmpp)
	{
		if (tmp->value == tmpp->value)
		{
			free_list(lst);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		if (tmpp == lst->end)
		{
			tmp = tmp->next;
			tmpp = tmp->next;
		}
		else
			tmpp = tmpp->next;
	}
}

int	check_arg(char **tab)
{
	int	i;

	i = 1;
	while (tab[i])
	{
		if (check_isdigit(tab[i]) == 1 || check_isint(tab[i]) == 1)
		{
			ft_putstr_fd("Error\n", 1);
			return (1);
		}
		i++;
	}
	return (0);
}
