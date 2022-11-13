/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/11/13 22:42:50 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list *create_stack_a(t_list *a, const char **av, int ac)
{
	int		i;
	int		j;
	int		*tmp;
	i = 1;
	if (ac == 1 || ac == 2)
		exit (0);
	while (i < ac)
	{
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
			error_msg("Error", 2);
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-' || av[i][j] == '+')
				j++;
			if (!ft_isdigit(av[i][j]))
				error_msg("Error", 2);
			j++;
		}
		tmp = (int *)malloc(sizeof(int));
		if (!tmp)
			return (NULL);
		*tmp = ft_atoi(av[i]);
		ft_lstadd_back(&a, ft_lstnew(tmp));
		i++;
	}
	return (a);
}


int	main(int ac, const char **av)
{
	t_list *a;

	a = NULL;
	a = create_stack_a(a, av, ac);
	while (a != NULL)
	{
		printf("[%d]\n", *(int *)a->content);
		a = a->next;
	}
	return (0);
}
