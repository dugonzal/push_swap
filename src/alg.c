/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:34:58 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/04 23:28:45 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	alg(t_list **a, t_list **b)
{
	(void)b;
	while (!order_check(a))
	{
		if (*(int *)(*a)->content > *(int *)(*a)->next->content)
			swap(a, "sa");
		else if (*(int *)(*a)->next->content > \
		*(int *)(*a)->next->next->content)
			reverse_rotate(a, "rra");
	}
}
