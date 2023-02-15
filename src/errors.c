/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:29 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/15 15:00:44 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_msg(char *s, int n)
{
	ft_printf ("%s\n", s);
	exit (n);
}

void	err(const char **av, int i, int ac)
{
	int	j;

	j = 0;
	while (av[i][j])
	{
		if (av[i][j] == '-' || av[i][j] == '+')
		{
			if (av[i][j + 1] == '+' || av[i][j + 1] == '-')
				error_msg("Error", 1);
			else
				j++;
		}
		if (!ft_isdigit(av[i][j]))
			error_msg ("Error", 1);
		check_int_max_min(av[i]);
		j++;
	}
	if (ac == 2)
		exit (1);
}

void	repeat(
void	check_int_max_min(const char *str)
{
	long long int	num;

	num = 0;
	while (*str)
		num = num * 10 + *str++ - 48;
	if (num > INT_MAX || num < INT_MIN)
		error_msg("Error", 1);
}
