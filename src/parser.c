/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:14:16 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/01 12:36:09 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static const char	**two_arguments(const char **av)
{
	char	**str;

	str = ft_split(av[1], ' ');
	av = (const char **)str;
	return (av) ;
}

t_list	*parser(int ac, const char **av)
{
	t_list	*a;
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
		err (av, i, ac);
		tmp = (int *)malloc(sizeof(int));
		*tmp = ft_atoi(av[i]);
		repeat (a, tmp);
		ft_lstadd_back(&a, ft_lstnew(tmp));
		i++;
	}
	return (a);
}
