/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <engo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:09:25 by engo              #+#    #+#             */
/*   Updated: 2022/09/26 14:36:20 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <stdint.h>
# include <stdlib.h>
# include "../LIBFT/libft.h"

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*back;
}				t_node;

typedef struct s_dlist
{
	int				len;
	struct s_node	*begin;
	struct s_node	*end;	
}				t_dlist;

typedef struct s_stack
{
	t_dlist	*stack_a;
	t_dlist	*stack_b;
}				t_stack;

t_dlist	*new_lst(void);
int		t_dlist_len(t_dlist *lst);
int		t_dlist_last(t_dlist *lst);
int		t_dlist_first(t_dlist *lst);
void	push_back_dlist(t_dlist *lst, int i);
void	push_front_dlist(t_dlist *lst, int i);
t_dlist	*pop_back_dlist(t_dlist *lst);
t_dlist	*pop_front_dlist(t_dlist *lst);
t_dlist	*clear_dlist(t_dlist *lst);
void	printlist(t_dlist *str);
void	sa(t_dlist *stack_a);
void	sb(t_dlist *stack_a);
void	ss(t_dlist *stack_a, t_dlist *stack_b);
void	pa(t_dlist *stack_a, t_dlist *stack_b);
void	pb(t_dlist *stack_a, t_dlist *stack_b);
void	ra(t_dlist *stack_a);
void	rb(t_dlist *stack_b);
void	rr(t_dlist *stack_a, t_dlist *stack_b);
void	rra(t_dlist *stack_a);
void	rrb(t_dlist *stack_b);
void	rrr(t_dlist *stack_a, t_dlist *stack_b);
int		check_isdigit(char *arg);
int		check_isint(char *arg);
int		check_double(char **str, int i);
int		check_arg(char **tab);
void	check_duplicate(t_dlist *lst);
int		push_all_a(char **av, t_dlist *stack_a);
void	three_sort(t_dlist *stack_a);
void	two_sort(t_dlist *stack_a);

#endif
