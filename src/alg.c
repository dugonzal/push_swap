/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:34:58 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/01 13:22:44 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


// puedo ir comporanod el primer elemento con el ultimo y asi sucesivamente
// si el primer elemento es mayor que el ultimo, entonces el primer elemento es el mayor
// si el primer elemento es menor que el ultimo, entonces el ultimo elemento es el mayor
void	alg(t_list **a, t_list **b)
{
	int		max;
	int		min;

	max = getMax(*a);
	min = getMin(*a);
	while (!order_check(a))
	{
		if (*(int *)(*a)->content == max)
		{
			rotate(a, "ra");
			max = getMax(*a);
		}
		else if (*(int *)(*a)->content == min)
		{
			push_b(a, b);
			min = getMin(*a);
		}
		else
			rotate(a, "ra");
	}
	while (*b)
		push_a(a, b);
}
