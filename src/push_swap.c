/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2023/02/11 17:37:45 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_lstindex(t_node *lst, int index)
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

int	getMinIndex(t_node *a)
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

static int	*get_min_number(t_node *a)
{
	int	min;
	int	*minn;

	min = *(int *)a->content;
	while (a)
	{
		if (*(int *)a->content < min)
			min = *(int *)a->content;
		a = a->next;
	}
	minn = malloc(sizeof(int));
	*minn = min;
	return (minn);
}

// encuentro el menor numero del stacj y lo indexo con 0 y asi sucesivamente
// y descarto el numero que ya indexe
static void index_stack(t_node *a, int ac)
{
	int	*min;
	int	i;
	int	index;

	i = 0;
	while (i < ac - 1)
	{
		min = get_min_number(a);
		index = getMinIndex(a);
		ft_lstadd_back_node(&a, ft_new_node(min));
		ft_lstindex(a, index);
		i++;
	}
}

int	main(int ac, const char **av)
{
	t_node	*a;

	a = NULL;
	a = parser(ac, av);
	index_stack(a, ac);
	//ft_lstclear(&a, free);
	//ft_lstclear(&b, free);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
