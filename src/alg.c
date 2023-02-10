/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:34:58 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/10 11:23:27 by dugonzal         ###   ########.fr       */
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

	max = get_max(*a);
	min = get_min(*a);
	while (!order_check(a))
	{
		if (*(int *)(*a)->content == max)
		{
			rotate(a, "ra");
			max = get_max(*a);
		}
		else if (*(int *)(*a)->content == min)
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
//

void	algoritmo(t_list **a, t_list **b)
{
	int	max;
	int	i;

	//int	min;
	i = 0;
	(void)b;
	max = get_max (*a);
	while (!order_check(&a[i]))
	{
		i++;
		// pudo comprobar los dos primeros numeros
		if (max)
		{
			printf ("[%d]{{{{{{{}}{}} \n", max);
			break ;
		}
	}
}
