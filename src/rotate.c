/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:24:15 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/01 17:07:29 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../include/push_swap.h"

/// @brief
/// @param stack
/// @param s
void	rotate(t_list **stack, char *s)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		tmp2 = *stack;
		while (tmp->next)
			tmp = tmp->next;
		*stack = (*stack)->next;
		tmp->next = tmp2;
		tmp2->next = NULL;
	}
	if (s)
		ft_printf ("%s\n", s);
}

// rotate a and b
/// @brief rotate a and b --rr
/// @param stack_a
/// @param stack_b
void	rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	ft_printf("rr\n");
}
