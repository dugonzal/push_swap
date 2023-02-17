/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:29 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 21:21:57 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_msg(char *s, int n)
{
	ft_printf (RED"Error\n%s\n"RESET, s);
	exit (n);
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
				error_msg("hay mas de un signo", 1);
			else
				j++;
		}
		if (!ft_isdigit(av[i][j]))
		{
			printf ("av[i][j]: ->[%c]", av[i][j]);
			error_msg ("no es un numero", 1);
		}
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
		error_msg("el numero es mayor o menor a un int", 1);
}
