/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:53:27 by vscode            #+#    #+#             */
/*   Updated: 2023/02/11 17:15:01 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include "../libft/include/libft.h"

typedef struct s_node
{
	int				*content;
	int				index;
	struct s_node	*next;
}				t_node;
//control de errores prototype

void		error_msg(char *s, int n);
void		err(const char **av, int i, int ac);
void		repeat(t_node *a, int *tmp);
void		check_int_max_min(const char *str);
void		ver(t_node *a);
int			order_check(t_list **a);
t_node		*parser(int ac, const char **av);
void		swap(t_list **stack, char *s);
void		swap_a_b(t_list **stack_a, t_list **stack_b);
void		push_b(t_list **stack_a, t_list **stack_b);
void		push_a(t_list **stack_a, t_list **stack_b);
void		rotate(t_list **stack, char *s);
void		rotate_a_b(t_list **stack_a, t_list **stack_b);
void		reverse_rotate(t_list **stack, char *s);
void		reverse_rotate_a_b(t_list **stack_a, t_list **stack_b);
void		alg(t_list **a, t_list **b);
int			get_max(t_list *a);
//int			get_min(t_list *a);
void		algoritmo(t_list **a, t_list **b);

#endif
