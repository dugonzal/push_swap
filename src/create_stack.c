/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:33:53 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/16 01:44:24 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	number_repeat(t_list *a, int *tmp)
{
	while (a != NULL)
	{
		if (*(int *)a->content == *tmp)
		{
			free (tmp);
			return (1);
		}
		a = a->next;
	}
	return (0);
}

static int	check_string(const char *s, int i)
{
	while (s[i])
	{
		if (s[i] == '-' || s[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

static void	control_errors(const char **s, int j, int i)
{
	while (s[i][j])
	{
		if (s[i][j] == '-' || s[i][j] == '+')
			j++;
		if (!ft_isdigit(s[i][j]))
			error_msg("Error", 1);
		while (s[i][j] >= '0' && s[i][j] <= '9')
			if (check_string(s[i], j++))
				error_msg("Error", 1);
	}
}

const char	**two_arguments(const char **av)
{
	char	**str;

	str = ft_split(av[1], ' ');
	av = (const char **)str;
	return (av);
}

t_list	*create_stack_a(t_list *a, const char **av, int ac)
{
	int		i;
	int		j;
	int		*tmp;

	i = 1;
	if (ac == 2)
	{
		ac = ft_count_words(av[1], ' ');
		av = two_arguments(av);
		i = 0;
	}
	while (i < ac)
	{
		j = 0;
		control_errors(av, j, i);
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
