/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2023/02/20 10:17:34 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_max(t_node *ac)
{
	int	max;

	max = ac->index;
	while (ac)
	{
		if (ac->index > max)
			max = ac->index;
		ac = ac->next;
	}
	return (max);
}

/// @brief
/// @param ac
/// @param av
/// @return
int	main(int ac, const char **av)
{
	t_node	**a;
	t_node	**b;

	a = (t_node **)malloc(sizeof(t_node *));
	b = (t_node **)malloc(sizeof(t_node *));
	ft_memset(a, 0, sizeof(t_node *));
	ft_memset(b, 0, sizeof(t_node *));
	parser(a, ac, av);
	if (ft_size(*a) < 11)
		alg (a, b);
	else
		sort(a, b);
	ver (a);
	clear(a);
	clear(b);
	exit (EXIT_SUCCESS);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
