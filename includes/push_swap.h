/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:09:25 by engo              #+#    #+#             */
/*   Updated: 2022/09/19 10:09:28 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <stdint.h>
# include <../libft/libft.h>

typedef struct  s_list
{
    int content;
    int i;
    struct s_list   *next;
}               t_list;

int	check_isdigit(char *arg);
int	check_isint(char *arg);
int	check_double(char **str, int i);
void	check_arg(char **tab);
