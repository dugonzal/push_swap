/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/11/17 19:41:26 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static const char **two_rguments(const char **av)
{
	char **str;

	str = ft_split(av[1], ' ');
	av = (const char **)str;
	return (av);
}

int	main(int ac, const char **av)
{
	t_list *a;
	int		i;
	int		*tmp;

	i = 1;
	a = NULL;
	if (ac == 2)
	{
		ac = ft_count_words(av[1], ' ');
		av = two_rguments(av);
		i = 0;
	}
	while (i < ac)
	{
		err (av, i);
		if (ac == 1)
			exit (0);
		tmp = (int *)malloc(sizeof(int));
		*tmp = ft_atoi(av[i]);
		repeat (a, tmp);
		ft_lstadd_back(&a, ft_lstnew(tmp));
		i++;
	}
	while (a)
	{
		ft_printf("[%d]\n", *(int *)a->content);
		a = a->next;
	}
}


/*
nos van a pasar los numeros a ordenar de dos maneras,
1. con una variable que tiene a dentro los argumentos
2. nos pasan uno a uno los argumentos

examples:
1. ARG="1 2 3 4 5"; ./push_swap $ARG
2. ./puush_swap 1 2 3 4 5

comprobacion de errores
*/
