/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:33:53 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/14 20:08:17 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int number_repeat(t_list *a, int *tmp)
{
	while (a != NULL)
	{
		if (*(int *)a->content == *tmp)
		{
			free (tmp); // ns si deba liberar memoria aqui
			return (1);

		}
		a = a->next;
	}
	return (0);
}

t_list *create_stack_a(t_list *a, const char **av, int ac)
{
	int		i;
	int		j;
	int		*tmp;

	if (ac == 1 || ac == 2)
		exit (0);
	if (ac == 3)
	{
		ft_split(av[2], ' ');
		ft_printf("-->%s<---\n", av[2]);
	}
	tmp = (int *)malloc(sizeof(int));
	if (!tmp)
		return (NULL);
	*tmp = ft_atoi(av[1]);
	a = ft_lstnew(tmp);
	i = 2;
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
			{
				error_msg("Error", 2);
				free (tmp); // ns si deba liberar nmemoria aqui
				break ;
			}
			j++;
		}
		tmp = (int *)malloc(sizeof(int));
		if (!tmp)
			return (NULL);
		*tmp = ft_atoi(av[i]);
		if (number_repeat(a, tmp))
			error_msg("Error", 2);
		ft_lstadd_back(&a, ft_lstnew(tmp));
		i++;
	}
	return (a);
}
