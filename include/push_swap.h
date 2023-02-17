/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:06:16 by ciclo             #+#    #+#             */
/*   Updated: 2023/02/17 18:06:06 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../libft/include/libft.h"

typedef struct s_node
{
	int 			index;
	int				content;
	struct s_node	*next;
}				t_node;

void		error(char *str);
void		check_error_parser(const char **av, int i, int ac);
void		check_int_max_min(const char *str);
t_node		**parser(int ac, const char **av);
const char	**two_arguments(const char **av);
void		is_order(t_node *stack_a);
int			repeat(t_node **a, int tmp);
#endif
