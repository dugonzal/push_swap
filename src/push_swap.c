/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2023/02/14 11:36:34 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_numbers(int *sorted, t_node *head, int size)
{
	int i;
	int j;
	int min_index;

	i = 0;
	j = 0;
	while (head != NULL)
	{
		sorted[i++] = *(head->content);
		head = head->next;
	}
	i = -1;
	while (++i < size - 1)
	{
		min_index = i;
		j = i;
		while (++j < size)
			if (sorted[j] < sorted[min_index])
				min_index = j;
		if (min_index != i)
			ft_swap(&sorted[i], &sorted[min_index]);
	}
}

int ft_size(t_node *head)
{
	int i;

	i = 0;
	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void index_numbers(t_node *head)
{
	int *sorted;
	int j;
	int size;

	size = ft_size(head);
	sorted = malloc(sizeof(int) * size);
	if (!sorted)
		return ;
	sort_numbers(sorted, head, size);
	// Asignar el índice
	while (head != NULL)
	{
		j = 0;
		while (j < size && *(head->content) != sorted[j])
			j++;
		head->index = j;
		head = head->next;
	}
	free(sorted);
}
int	main(int ac, const char **av)
{
	t_node	*a;
	t_node	*b;

	ft_memset(&a, 0, sizeof(t_node));
	ft_memset(&b, 0, sizeof(t_node));
	a = (t_node *)malloc(sizeof(t_node));
	b = (t_node *)malloc(sizeof(t_node));
 	a  = parser(ac, av);
	index_numbers(a);
	ver (a);
	//ft_lstclear(&a, free);
	//ft_lstclear(&b, free);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
