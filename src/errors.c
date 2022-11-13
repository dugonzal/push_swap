/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:29 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/13 17:26:03 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"



// El objetivo es ordenar los números del stack a en orden ascendente.

static void checker(char **av, int i)
{
	int p;

	p = 0;
	while (av[i][p])
	{
		if (av[i][p] == '-' || av[i][p] == '+')
			p++;
		if (!ft_isdigit(av[i][p]))
			error_msg("Error", 2);
		p++;
	}

	if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
		error_msg("Error", 2);
	// check if is int
}

void checker_errors(int ac, char **av)
{
	// argumentos que no son enteros agumentos superiores a int o encontrar numeros dupliplicados
	int i;

	i = 1;
	(void)av; // es un puntero puntero porque trasporta un array de arays
	if (ac == 1 || ac == 2)
		exit (0);
	while (i < ac)
		checker(av, i++);
}

void error_msg (char *s, int n)
{
	ft_printf ("%s\n", s);
	exit (n);
}
