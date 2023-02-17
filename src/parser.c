/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:30:10 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 18:09:26 by ciclo            ###   ########.fr       */
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

t_node	*ft_new_node(int content)
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
	printf("tmp->content: %d, ", new->content);
	while (tmp)
		tmp = tmp->next;
	tmp->next = new;
	return (lst);
}

t_node	**parser(int ac, const char **av)
{
	t_node	**a;
	t_node	*new;
	int		i;
	int		tmp;

	i = 0;
	if (ac == 2)
		av = two_arguments(av);
	a = (t_node **)malloc(sizeof(t_node));
	if (!a)
		return (NULL);
	*a = NULL;
	while (av[i])
	{
		tmp = ft_atoi(av[i]);
		//check_int_max_min(av[i]);
		if (repeat(a, tmp))
			error("Error");
		new = ft_new_node(tmp);
		ft_lstadd_back_node(a, new);
		i++;
	}
	return (a);
}
