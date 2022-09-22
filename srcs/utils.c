/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:37:32 by engo              #+#    #+#             */
/*   Updated: 2022/09/22 13:25:55 by engo             ###   ########.fr       */
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

int	t_dlist_len(t_dlist *lst)
{
	if (lst->len == 0)
		return (0);
	return (lst->len);
}

int	t_dlist_first(t_dlist *lst)
{
	if (lst->len == 0)
		exit(1);
	return (lst->begin->value);
}

int	t_dlist_last(t_dlist *lst)
{
	if (lst->len == 0)
		exit(1);
	return (lst->end->value);
}
