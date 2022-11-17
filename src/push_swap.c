/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/11/17 19:23:10 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"



int	main(int ac, const char **av)
{
	t_list *a;
	int		i;
	int		*tmp;

	i = 1;
	a = NULL;
	while (i < ac)
	{
		err (av, i);
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
