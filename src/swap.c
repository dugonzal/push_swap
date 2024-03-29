/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:20:12 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/13 18:24:21 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/// @brief
/// @param stack
/// @param s
void	swap(t_node **stack, char *s)
{
	t_node	*tmp;

	if (*stack && (*stack)->next)
	{
		tmp = (*stack)->next;
		(*stack)->next = tmp->next;
		tmp->next = *stack;
		*stack = tmp;
	}
	if (s)
		ft_printf ("%s\n", s);
}

/// @brief
/// @param stack_a
/// @param stack_b
void	swap_a_b(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, NULL);
	ft_printf("ss\n");
}
