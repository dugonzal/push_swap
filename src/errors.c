/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:29 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/18 21:58:11 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_msg(void)
{
	ft_printf (RED"Error\n"RESET);
	exit (1);
}

void	err(const char **av, int i)
{
	int	j;

	j = 0;
	while (av[i][j])
	{
		if (av[i][j] == '-' || av[i][j] == '+')
		{
			if (av[i][j + 1] == '+' || av[i][j + 1] == '-')
				error_msg();
			j++;
		}
		if (!ft_isdigit(av[i][j]))
			error_msg ();
		j++;
	}
}

void	ft_max_min(const char *str)
{
	long int	num;

	num = 0;
	while (*str)
		num = num * 10 + *str++ - 48;
	if (num > INT_MAX || num < INT_MIN)
		error_msg();
}
