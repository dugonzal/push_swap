/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:05:55 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 12:47:00 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


/*
	--- voy hacer primero el push swap con arrays para entenderlo mejor
		luego con listas, pero ahora mismo no lo veo del todo claro
	creo que sea como sea tine
*/

int	main(int ac, const char **av)
{

	int *stack_a;
	int *stack_b;

	(void)stack_b;
	stack_a = NULL;
	stack_b = NULL;
	stack_a = parser(av, ac);
	while (*stack_a)
	{
		printf("[%d]\n", *stack_a);
		stack_a++;
	}
	return (EXIT_SUCCESS);
}
