/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/11/18 13:20:43 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static const char **two_arguments(const char **av)
{
	char **str;

	str = ft_split(av[1], ' ');
	av = (const char **)str;
	return (av);
}

static void order_check(t_list **a)
{
	t_list *tmp;

	tmp = *a;
	while (tmp->next != NULL)
	{
		if (*(int *)tmp->content > *(int *)tmp->next->content)
			return ;
		tmp = tmp->next;
	}
	exit (0);
}

int	main(int ac, const char **av)
{
	t_list *a;
	int		i;
	int		*tmp;

	i = 1;
	a = NULL;
	if (ac == 2)
	{
		ac = ft_count_words(av[1], ' ');
		av = two_arguments(av);
		i = 0;
	}
	while (i < ac)
	{
		err (av, i);
		if (ac == 1)
			exit (0);
		tmp = (int *)malloc(sizeof(int));
		*tmp = ft_atoi(av[i]);
		repeat (a, tmp);
		ft_lstadd_back(&a, ft_lstnew(tmp));
		i++;
	}
	order_check(&a);
	while (a)
	{
		ft_printf("%d\n", *(int *)a->content);
		a = a->next;
	}
	ft_lstclear(&a, free);
	return (0);
}

/*
el objetivo es rodenar de menot a mayor el stack es decir en orden acendente
el stack es una lista enlazada,el stack a es el stack de entrada
*/
