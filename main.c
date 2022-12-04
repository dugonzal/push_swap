/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:38:50 by ciclo             #+#    #+#             */
/*   Updated: 2022/12/04 18:41:50 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void countsort(t_list **a, t_list **b, int n, int exp)
{
	int	*output;
	int	i;
	int	count[10];

	i = 0;
	output = (int *)malloc(n * sizeof(int));
	while (i < 10)
		count[i++] = 0;
	i = 0;
	while (i < n)
	{
		count[(*(int *)ft_lstindex(*a, i) / exp) % 10]++;
		i++;
	}
	i = 1;
	while (i < 10)
	{
		count[i] += count[i - 1];
		i++;
	}
	i = n - 1;
	while (i >= 0)
	{
		output[count[(*(int *)ft_lstindex(*a, i) / exp) % 10] - 1] = *(int *)ft_lstindex(*a, i);
		count[(*(int *)ft_lstindex(*a, i) / exp) % 10]--;
		i--;
	}
	i = 0;
	while (i < n)
	{
		*(int *)ft_lstindex(*a, i) = output[i];
		i++;
	}
	free(output);
}

void radixsort(t_list **a, t_list **b, int n)
{
	int	max;
	int	exp;

	max = getmax(*a);
	exp = 1;
	while (max / exp > 0)
	{
		countsort(a, b, n, exp);
		exp *= 10;
	}
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		i;

	i = 0;
	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	while (av[++i])
		ft_lstadd_back(&a, ft_lstnew(*(int *)ft_atoi(av[i])));
	radixsort(&a, &b, ft_lstsize(a));
	ft_lstclear(&a, free);
	ft_lstclear(&b, free);
	return (0);
}
