/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/11/13 19:41:42 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_list *create_stack_a(t_list *a, char **av, int ac)
{
	int		i;
	size_t	j;
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
		*tmp = ft_atoi(av[i]);
		ft_lstadd_back(&a, ft_lstnew(tmp));
		i++;
	}
	return (a);
}


int	main(int ac, char **av)
{
	t_list *a;

	a = NULL;
	int i = 1;
	int p;
	ac--;
	while (i < ac)
	{
		p = ft_atoi(av[i]);
		ft_printf("hererererer");
		if ((p > INT_MAX) || (p < INT_MIN))
			error_msg("Ergfror", 2);
		i++;
	}
	a = create_stack_a(a, av, ac);
	ft_printf("here");
/*	ft_lstiter(a, (void *)ft_putnbr);*/
	return (0);
}
