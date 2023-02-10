/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2023/02/10 12:12:48 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_lstindex(t_list *lst, int index)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (i == index)
			return (*(int *)lst->content);
		lst = lst->next;
		i++;
	}
	return (0);
}

/*
int	getMinIndex(t_list *a)
{
	int	min;
	int	i;
	int	index;

	min = *(int *)a->content;
	index = 0;
	i = 0;
	while (a)
	{
		if (*(int *)a->content < min)
		{
			min = *(int *)a->content;
			index = i;
		}
		a = a->next;
		i++;
	}
	return (index);
}
*/

int	main(int ac, const char **av)
{
	t_node	*a;
	t_node	*b;

	b = NULL;
	a = parser(ac, av);
	ver (a);
	//ft_lstclear(&a, free);
	//ft_lstclear(&b, free);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
