/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:34:29 by ciclo             #+#    #+#             */
/*   Updated: 2022/11/15 23:44:04 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// El objetivo es ordenar los números del stack a en orden ascendent

void	error_msg(char *s, int n)
{
	ft_printf ("%s\n", s);
	exit (n);
}
