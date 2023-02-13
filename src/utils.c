/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:37:41 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/13 18:23:23 by ciclo            ###   ########.fr       */
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

void	ver(t_node *a)
{
	printf ("\n");
	while (a)
	{
		printf ("%d ", *(int *)a->content);
		printf ("(%d) \n", a->index);
		a = a->next;
	}
	printf ("\n");
}
