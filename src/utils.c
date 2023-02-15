/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:37:41 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/15 13:18:28 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	order_check(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (*(int *)tmp->content > *(int *)tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	get_min(t_node *a)
{
	int	min;

	min = *(int *)a->content;
	while (a)
	{
		if (*(int *)a->content < min)
			min = *(int *)a->content;
		a = a->next;
	}
	return (min);
}

void	ver(t_node **a)
{
	printf ("\n");
	while (*a)
	{
		printf ("<content>%d \n", *(*a)->content);
		//printf ("<index>(%d) \n", a->index);
		*(*a) = *(*a)->next;
	}
	printf ("\n");
}

void clear(t_node **head)
{
	t_node *tmp;

	tmp = *head;
	while (tmp != 0)
	{
		if (tmp)
			free (tmp);
		tmp = tmp->next;
	}
}
