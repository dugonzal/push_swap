/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/12/01 17:13:26 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ordenar_stack(t_list *a, t_list *b)
{
	if (order_check(&a))
		exit (0);
	(void)b;
	small_alg(&a);
	ver(a);
	ft_lstiter(a, free);
	return ;
}

int	main(int ac, const char **av)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = parser(ac, av);
	ordenar_stack(a, b);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
