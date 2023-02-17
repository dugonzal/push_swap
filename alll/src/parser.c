/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:14:16 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 15:53:05 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

const char	**two_arguments(const char **av)
{
	char	**str;

	str = ft_split(av[1], ' ');
	av = (const char **)str;
	return (av);
}

t_node	*ft_new_node(int *content)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_node	**ft_lstadd_back_node(t_node **lst, t_node *new)
{
	t_node	*tmp;

	if (!lst)
		return (lst);

	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (lst);
}

t_node	**parser(int ac, const char **av)
{
	t_node	**tmp_node;
	int		*tmp;
	int		i;

	i = 0;
	tmp_node = NULL;
	if (ac == 2)
	{
		ac = ft_count_words(av[1], ' ');
		av = two_arguments(av);
		i = -1;
	}
	while (++i < ac)
	{
		err (av, i, ac);
		tmp = (int *)malloc(sizeof(int));
		*tmp = ft_atoi(av[i]);
		tmp_node = ft_lstadd_back_node(tmp_node, ft_new_node(tmp));
		repeat (tmp_node, tmp);
	}
	if (order_check(tmp_node))
	{
		free(tmp_node);
		exit(1);
	}
	return (tmp_node);
}
