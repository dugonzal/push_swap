/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:05:55 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 18:06:29 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


/*
	--- voy hacer primero el push swap con arrays para entenderlo mejor
		luego con listas, pero ahora mismo no lo veo del todo claro
	creo que sea como sea tine
*/

int ft_size(int *a)
{
	int i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int	repeat(t_node **a, int tmp)
{
	t_node *tmp2;

	tmp2 = *a;
	while (tmp2)
	{
		if (tmp2->content == tmp)
			return (1);
		tmp2 = tmp2->next;
	}
	return (0);
}

void ft_print_stack(t_node **a)
{
	t_node *tmp;

	tmp = *a;
	while (tmp)
	{
		printf("%d", tmp->content);
		tmp = tmp->next;
	}
}

int	main(int ac, const char **av)
{
	t_node **a;
	t_node **b;

	ft_memset(&a, 0, sizeof(t_node));
	ft_memset(&b, 0, sizeof(t_node));
	a = (t_node **)malloc(sizeof(t_node *));
	b = (t_node **)malloc(sizeof(t_node *));
	a = parser(ac, av);
	ft_print_stack(a);
	return (EXIT_SUCCESS);
}
