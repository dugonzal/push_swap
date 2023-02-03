/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/02/03 17:53:08 by dugonzal         ###   ########.fr       */
=======
/*   Updated: 2023/02/01 13:23:39 by ciclo            ###   ########.fr       */
>>>>>>> f5d3a8d2fc55b319569b65f9351ceabcc385d98b
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
	t_list	*a;
	t_list	*b;

	b = NULL;
	a = parser(ac, av);
<<<<<<< HEAD
	//alg(&a, &b);
	algoritmo (&a, &b);
	ver (a);
=======
	alg(&a, &b);
>>>>>>> f5d3a8d2fc55b319569b65f9351ceabcc385d98b
	ft_lstclear(&a, free);
	ft_lstclear(&b, free);
	exit (0);
}

/*
el objetivo es ordenar de menor a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
