/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2023/02/13 18:15:09 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* t_node	*get_next_min(t_node **a)
{
	t_node	*tmp;
	t_node	*tmp2;
	int		min;

	tmp = *a;
	tmp2 = tmp;
	min = *(int *)tmp->content;
	while (tmp)
	{
		printf ("min = [%d], tmp->content = [%d], tmp2->content = [%d]\n", min, *(int *)tmp->content, *(int *)tmp2->content);
		if (*(int *)tmp->content < min)
		{
			min = *(int *)tmp->content;
			tmp2 = tmp;
		}
		else
			tmp = tmp->next;
	}
	return (tmp2);
}
 */



int	main(int ac, const char **av)
{
	t_node	*a;
	t_node	*b;

	ft_memset(&a, 0, sizeof(t_node));
	ft_memset(&b, 0, sizeof(t_node));
	a = (t_node *)malloc(sizeof(t_node));
	b = (t_node *)malloc(sizeof(t_node));
 	a  = parser(ac, av);
	get_next_min(&a);
	ver (a);
	//ft_lstclear(&a, free);
	//ft_lstclear(&b, free);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
