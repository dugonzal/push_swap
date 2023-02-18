/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2023/02/18 22:48:27 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_max(t_node *ac)
{
	int	max;

	max = ac->content;
	while (ac)
	{
		if (ac->content > max)
			max = ac->content;
		ac = ac->next;
	}
	return (max);
}

void	sort(t_node **a, t_node **b)
{
	int	size;
	int i;
	int j;

	i = 0;
	size = ft_size (*a);
	while (!order_check(a))
	{
		j = 0;
		if ((*a)->index > (*a)->next->index)
			swap (a, "sa");
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 1)
				rotate (a, "ra");
			else
			{
				if (order_check (a) && ft_size(*b) == 0)
					return ;
				else
					push_b (a, b);
			}
			j++;
		}
		i++;
		while (*b)
			push_a (a, b);
	}
}

int	main(int ac, const char **av)
{
	t_node	**a;
	t_node	**b;

	a = (t_node **)malloc(sizeof(t_node *));
	b = (t_node **)malloc(sizeof(t_node *));
	ft_memset(a, 0, sizeof(t_node *));
	ft_memset(b, 0, sizeof(t_node *));
 	parser(a, ac, av);
	sort(a, b);

	//ver (a);

	//clear(b);
	//clear(b);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
