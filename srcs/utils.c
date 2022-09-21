/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:37:32 by engo              #+#    #+#             */
/*   Updated: 2022/09/21 14:00:07 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_dlist	*new_lst(void)
{
	t_dlist	*l;

	l = malloc(sizeof(t_dlist));
	if (!l)
		return (NULL);
	l->begin = NULL;
	l->end = NULL;
	l->len = 0;
	return (l);
}

t_Bool	empty_lst(t_dlist *lst)
{
	if (lst == NULL)
		return (true);
	return (false);
}

int	t_dlist_len(t_dlist *lst)
{
	if (empty_lst(lst))
		return (0);
	return (lst->len);
}

int	t_dlist_first(t_dlist *lst)
{
	if (empty_lst(lst))
		exit(1);
	return (lst->begin->value);
}

int	t_dlist_last(t_dlist *lst)
{
	if(empty_lst(lst))
		exit(1);
	return (lst->end->value);
}
