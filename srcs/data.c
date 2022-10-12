/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:37:32 by engo              #+#    #+#             */
/*   Updated: 2022/10/12 15:22:07 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_dlist	*new_lst(void)
{
	t_dlist	*lst;

	lst = malloc(sizeof(t_dlist));
	if (!lst)
		return (NULL);
	lst->begin = NULL;
	lst->end = NULL;
	lst->len = 0;
	return (lst);
}

int	is_empty_list(t_dlist *l)
{
	int	i;

	i = 0;
	if (l->begin == NULL)
	{
		i++;
		return (i);
	}
	return (0);
}
