/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:29 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/21 06:25:58 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_msg(void)
{
	ft_printf (RED"Error"RESET);
	write (2, "\n", 1);
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
