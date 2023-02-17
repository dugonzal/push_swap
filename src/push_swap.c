/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2023/02/17 21:09:59 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_numbers(int **sorted, t_node **head, int size)
{
	int i;
	int j;
	int min_index;
	t_node *tmp;
	int tmp_sorted;

	tmp_sorted = *sorted;
	tmp = *head;
	i = 0;
	while (tmp != NULL)
	{
		tmp_sorted = tmp->content;
		tmp = tmp->next;
	}
	j = 0;
	i = -1;
	while (++i < (size - 1))
	{
		min_index = i;
		j = i;
		while (++j < size)
			if (sorted[j] < sorted[min_index])
				min_index = j;
		if (min_index != i)
			ft_swap(*&sorted[i], *&sorted[min_index]);
	}
	(void)tmp_sorted;
}
 */
int ft_size(t_node **head)
{
	t_node *tmp;
	int i;

	tmp = *head;
	i = 0;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}


int	main(int ac, const char **av)
{
	t_node	**a;
	t_node	**b;

	ft_memset(&a, 0, sizeof(t_node));
	ft_memset(&b, 0, sizeof(t_node));
	a = (t_node **)malloc(sizeof(t_node *));
	b = (t_node **)malloc(sizeof(t_node *));
 	parser(a, ac, av);
	ver (a);
	//clear(a);
	//clear(b);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
