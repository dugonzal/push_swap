/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2023/02/15 13:41:04 by ciclo            ###   ########.fr       */
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

void	sort_numbers(int **sorted, t_node **head, int size)
{
	int i;
	int j;
	int min_index;
	t_node *tmp;
	int *tmp_sorted;

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

// Asignar el índice
void index_numbers(t_node **head)
{
	int **sorted;
	t_node *tmp;
	int j;
	int size;

	tmp = *head;
	size = ft_size(head);
	sorted = malloc(sizeof(int) * size);
	if (!sorted)
		return ;
	sort_numbers(sorted, head, size);
	while (tmp != NULL)
	{
		j = 0;
		while (j < size && tmp->content != sorted[j])
			j++;
		tmp->index = j;
		tmp = tmp->next;
	}
	free(sorted);
}

int	ft_order_check_index(t_node **a)
{
	t_node *tmp;

	tmp = *a;
	while (tmp != 0)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	radix_sort(t_node **a, t_node **b)
{
	// algoritmo raro que he eestoy a punto de hacer

	int size;
	int i;

	i = 0;
	size = ft_size (a);
	printf ("%d", size);

	while (!ft_order_check_index(a))
	{
		// solo voy hacer la mitad de la lista
		while (i < size)
		{
			if ((int)(*a)->index < size && (int)(*a)->next->index < (*a)->index)
			{
				swap (a, "sa");
			}
			else
				push_b (a, b);
			i++;
		}
		//break;
	}

}

int	main(int ac, const char **av)
{
	t_node	**a;
	t_node	**b;

	ft_memset(&a, 0, sizeof(t_node));
	ft_memset(&b, 0, sizeof(t_node));
	a = (t_node **)malloc(sizeof(t_node *));
	b = (t_node **)malloc(sizeof(t_node *));
	//ver (a);
 	a  = parser(ac, av);
	ver (a);
	//index_numbers(a);
	//radix_sort(a, b);
	//ver (*a);
	clear(a);
	clear(b);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
