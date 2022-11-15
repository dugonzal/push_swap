/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:09:03 by vscode            #+#    #+#             */
/*   Updated: 2022/11/16 00:04:41 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, const char **av)
{
	t_list	*a;

	a = NULL;
	a = create_stack_a(a, av, ac);
	// si me pasant dos atgumentos es decit el bianrio o ejecutable y la variable de argumentos tenfgo que hacer un split de los argumentos;
	if (ac == 2 || ac == 1)
		printf("si es igual  a 1 o 2\n");
	while (a != NULL)
	{
		printf("[%d]", *(int *)a->content);
		a = a->next;
	}
	return (0);
}
