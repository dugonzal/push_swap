/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:59:32 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/18 21:14:52 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static t_node	*get_next_min(t_node **a)
{
	t_node	*tmp;
	t_node	*min;

	tmp = *a;
	min = NULL;
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if ((tmp->index == -1) && (!min || tmp->content < min->content))
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	index_stack(t_node **a)
{
	t_node	*tmp;
	int		i;

	i = -1;
	tmp = get_next_min(a);
	while (tmp)
	{
		tmp->index = ++i;
		tmp = get_next_min(a);
	}
}
