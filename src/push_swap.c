/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/12/01 17:06:08 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ordenar_stack(t_list *a, t_list *b)
{
	(void)b;
	small_alg(&a);
	ver(a);
}

int	main(int ac, const char **av)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = parser(ac, av);
	if (order_check(&a))
		exit (0);
	ordenar_stack(a, b);
	ft_lstiter(a, free);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
