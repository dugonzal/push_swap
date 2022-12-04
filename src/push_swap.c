/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/12/04 23:01:38 by ciclo            ###   ########.fr       */
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

void ft_radixsort(t_list **a, t_list **b, int size)
{
	int	i;
	//int	j;
	int	max;
	int	min;
	int	*arr;

	i = -1;
	//j = 0;
	(void)b;
	arr = (int *)malloc(sizeof(int) * size);
	while (++i < size)
		arr[i] = ft_lstindex(*a, i);
	max = getMax(*a);
	min = getMin(*a);
	printf ("%d %d", max, min);
	

}

static void	ordenar_stack(t_list *a, t_list *b)
{
	(void)b;
	if (order_check(&a))
		exit (0);
	if (ft_lstsize(a) < 4)
		small_alg(&a);
	else
		ft_radixsort(&a, &b, ft_lstsize(a));

}

int	main(int ac, const char **av)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = parser(ac, av);
	ordenar_stack(a, b);

	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
