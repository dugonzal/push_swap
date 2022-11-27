/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:01:00 by dugonzal          #+#    #+#             */
/*   Updated: 2022/11/27 14:00:38 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// swap

void swap(t_list **stack, char *s)
{
	t_list *tmp;

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


// push

void push(t_list **stack_a, t_list **stack_b, char *s)
{
	t_list *tmp;

	if (*stack_b)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = *stack_a;
		*stack_a = *stack_b;
		*stack_b = tmp;
	}
	if (s)
		ft_printf ("%s\n", s);
}

// rotate

void rotate(t_list **stack, char *s)
{
	t_list *tmp;
	t_list *tmp2;

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

// reverse rotate

void reverse_rotate(t_list **stack, char *s)
{
	t_list *tmp;
	t_list *tmp2;

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
