/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:01:00 by dugonzal          #+#    #+#             */
/*   Updated: 2022/11/27 20:36:11 by ciclo            ###   ########.fr       */
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

void swap_a_b(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a, NULL);
	swap(stack_b, NULL);
	ft_printf("ss\n");
}

// push a

void push_a(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp;

	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	ft_printf("pa\n");
}

// push b

void push_b(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp;

	if (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	ft_printf("pb\n");
}

// rotate a or b

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

// rotate a and b

void rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	ft_printf("rr\n");
}

// reverse rotate a and b

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

// reverse rotate a y reverse rotate b

/// @brief reverse rotate a y reverse rotate b --rrr
/// @param stack_a
/// @param stack_b
void reverse_rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a, NULL);
	reverse_rotate(stack_b, NULL);
	ft_printf ("rrr\n");
}
