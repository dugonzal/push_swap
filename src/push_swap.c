/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/11/14 19:52:14 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, const char **av)
{
	t_list *a;

	printf ("\nargc ->[%d]\n", ac);
	a = NULL;
	a = create_stack_a(a, av, ac);
	while (a != NULL)
	{
		printf("[%d]", *(int *)a->content);
		a = a->next;
	}

	return (0);
}
