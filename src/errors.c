/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:15:09 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 12:55:32 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error(char *str)
{
	printf (RED"Error\n %s\n"RESET, str);
	exit (EXIT_FAILURE);
}

void	check_error_parser(const char **av, int i, int ac)
{
	int	j;

	j = 0;
	while (av[i][j])
	{
		if (av[i][j] == '-' || av[i][j] == '+')
		{
			if (av[i][j + 1] == '+' || av[i][j + 1] == '-')
				error("tiene dos signos seguidos");
			else
				j++;
		}
		if (!ft_isdigit(av[i][j]))
			error ("no es un numero");
		check_int_max_min(av[i]);
		j++;
	}
	if (ac == 2)
		exit (1);
}

void	check_int_max_min(const char *str)
{
	long int	num;

	num = 0;
	while (*str)
		num = num * 10 + *str++ - 48;
	if (num > INT_MAX || num < INT_MIN)
		error("es demasiado grande o demasiado pequeño");
}

