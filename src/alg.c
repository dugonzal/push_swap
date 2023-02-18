/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:34:58 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/18 23:11:53 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
			if ((((*a)->index >> i) & 1) % 2)
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

void	alg(t_node **a, t_node **b)
{
	int		max;
	int		min;

	max = get_max(*a);
	min = get_min(*a);
	while (!order_check(a))
	{
		if ((*a)->index == max)
		{
			rotate(a, "ra");
			max = get_max(*a);
		}
		else if ((*a)->index == min)
		{
			push_b(a, b);
			min = get_min(*a);
		}
		else
			rotate(a, "ra");
	}
	while (*b)
		push_a(a, b);
}
