/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:06:16 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 12:54:41 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/include/libft.h"

void		error(char *str);
void		check_error_parser(const char **av, int i, int ac);
void		check_int_max_min(const char *str);
int			*parser(const char **av, int ac);
const char	**two_arguments(const char **av);
int			is_order(int *stack_a);
#endif
