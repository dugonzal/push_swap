/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:37:41 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 21:23:21 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	order_check(t_node **a)
{
	t_node	*tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	get_min(t_node *a)
{
	int	min;

	min = a->content;
	while (a)
	{
		if (a->content < min)
			min = a->content;
		a = a->next;
	}
	return (min);
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

int ft_sizechar(const char **av)
{
	int i;

	i = 0;
	while (av[i] != NULL)
		i++;
	return (i);
}

void	ver(t_node **a)
{
	t_node *tmp;

	tmp = *a;
	while (tmp != NULL)
	{
		printf ("[%d]\n", tmp->content);
		tmp = tmp->next;
	}
}
