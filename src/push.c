/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:21:33 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/13 18:24:03 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//se podria usar la misma funcion cambiando el oreden de entrada de los stacks
/// @brief
/// @param stack_a
/// @param stack_b
void	push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	ft_printf("pa\n");
}

/// @brief
/// @param stack_a
/// @param stack_b
void	push_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	ft_printf("pb\n");
}
