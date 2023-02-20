/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:29 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/20 02:35:28 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_msg(void)
{
	ft_printf (RED"Error\n"RESET);
	exit (1);
}

void	err(const char **av, int i, t_node **a)
{
	int	j;

	j = 0;
	while (av[i][j])
	{
		if (av[i][j] == '-' || av[i][j] == '+')
		{
			if (av[i][j + 1] == '+' || av[i][j + 1] == '-')
			{
				clear (a);
				error_msg();
			}
			j++;
		}
		if (!ft_isdigit(av[i][j]))
		{
			clear (a);
			error_msg ();
		}
		j++;
	}
}

void	ft_max_min(const char *str, t_node **a)
{
	long int	num;

	num = 0;
	while (*str)
		num = num * 10 + *str++ - 48;
	if (num > INT_MAX || num < INT_MIN)
	{
		clear (a);
		error_msg();
	}
}
