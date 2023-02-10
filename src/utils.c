/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:37:41 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/10 11:50:32 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	order_check(t_list **a)
{
	t_list	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (*(int *)tmp->content > *(int *)tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	get_max(t_list *a)
{
	int	max;

	max = *(int *)a->content;
	while (a)
	{
		if (*(int *)a->content > max)
			max = *(int *)a->content;
		a = a->next;
	}
	return (max);
}

int	get_min(t_list *a)
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
		a = a->next;
	}
	printf ("\n");
}
