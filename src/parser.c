/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:14:16 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/20 02:38:57 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	repeat_check(t_node **a)
{
	t_node	*tmp;
	t_node	*tmp2;

	tmp = *a;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->content == tmp2->content)
			{
				clear (a);
				error_msg();
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

static const char	**two_arguments(const char **av)
{
	char	**str;

	str = ft_split(av[1], ' ');
	av = (const char **)str;
	return (av);
}

static t_node	*ft_new_node(int content)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->index = -1;
	new->content = content;
	new->next = NULL;
	return (new);
}

static void	ft_lstadd_back_node(t_node **a, t_node *new)
{
	t_node	*tmp;

	if (!new)
		return ;
	if (!*a)
	{
		*a = new;
		return ;
	}
	tmp = *a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void	parser(t_node **a, int ac, const char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
		av = two_arguments(av);
	else
		i = 1;
	while (av[i])
	{
		err(av, i, a);
		ft_max_min(av[i], a);
		ft_lstadd_back_node(a, ft_new_node(ft_atoi(av[i])));
		repeat_check(a);
		i++;
	}
	if (ft_sizechar(av) < 2 || order_check(a) == 1)
	{
		clear(a);
		exit(0);
	}
	index_stack(a);
}
