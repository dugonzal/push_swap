/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:59:32 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/20 02:39:21 by dugonzal         ###   ########.fr       */
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

int	ft_size(t_node *head)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}
