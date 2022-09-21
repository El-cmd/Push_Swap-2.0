/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 01:58:32 by engo              #+#    #+#             */
/*   Updated: 2022/09/21 09:58:34 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check_double(char **str, int i)
{
	int	j;

	j = i + 1;
	while (str[j])
	{
		if (ft_atol(str[j]) == ft_atol(str[i]))
			return (1);
		j++;
	}
	return (0);
}

void	check_arg(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (check_isdigit(tab[i]) == 1 || check_isint(tab[i]) == 1
			|| check_double(tab, i == 1))
		{
			free_tab(tab);
			ft_putstr("Error\n");
			exit(2);
		}
		i++;
	}
	return ;
}
