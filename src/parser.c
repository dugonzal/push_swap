/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:30:10 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 12:51:52 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

const char **two_arguments(const char **av)
{
	char **str;

	str = ft_split(av[1], ' ');
	av = (const char **)str;
	return (av);
}

int *parser(const char **av, int ac)
{
	int i;
	int j;
	int *tmp;

	i = 1;
	j = 0;
 	if (ac == 2)
	{
		ac = ft_count_words(av[1], ' ');
		av = two_arguments(av);
		i = 0;
	}
	tmp = (int *)malloc(sizeof(int) * (ac + 1));
	if (!tmp)
		return (NULL);
	while (i < ac)
	{
		check_error_parser(av, i, ac);
		tmp[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	tmp[j] = '\0';
	if ((is_order(tmp)) == 1)
	{
		free(tmp);
		exit (1);
	}
	return (tmp);
}
