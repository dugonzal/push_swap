/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:01:00 by dugonzal          #+#    #+#             */
/*   Updated: 2022/12/01 17:07:56 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate(t_list **stack, char *s)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (*stack && (*stack)->next)
	{
		tmp = *stack;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp2 = tmp->next;
		tmp->next = NULL;
		tmp2->next = *stack;
		*stack = tmp2;
	}
	if (s)
		ft_printf ("%s\n", s);
}

/// @brief reverse rotate a y reverse rotate b --rrr
/// @param stack_a
/// @param stack_b
void	reverse_rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a, NULL);
	reverse_rotate(stack_b, NULL);
	ft_printf ("rrr\n");
}
