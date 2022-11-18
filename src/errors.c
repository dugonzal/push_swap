/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:29 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/18 10:26:16 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// El objetivo es ordenar los números del stack a en orden ascendent

void	error_msg(char *s, int n)
{
	ft_printf ("%s\n", s);
	exit (n);
}

void err(const char **av, int i)
{
	int j;

	j = 0;
	while (av[i][j])
	{
		check_int_max_min(av[i]);
		if (av[i][j] == '-' || av[i][j] == '+')
		{
			if (av[i][j + 1] == '+' || av[i][j + 1] == '-')
				error_msg("Error", 1);
			else
				j++;
		}
		if (!ft_isdigit(av[i][j]))
			error_msg ("Error", 1);
		j++;
	}
}

// siempre que use una lita void *content hay que castear al tipo de dato
// example *(int *)a->content

void repeat(t_list *a, int *tmp)
{
	while (a != NULL)
	{
		if (*(int *)a->content == *tmp)
		{
			error_msg ("Error", 1);
			exit (1);
		}
		else
			a = a->next;
	}
}

void check_int_max_min(const char *str)
{
	long long int num;

	num = 0;
	if (*str == '-')
		str++;
	while (*str)
		num = num * 10 + *str++ - '0';
	if (num > INT_MAX || num < INT_MIN)
		error_msg("Error", 1);
}
