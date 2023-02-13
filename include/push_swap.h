/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:53:27 by vscode            #+#    #+#             */
/*   Updated: 2023/02/13 18:22:32 by ciclo            ###   ########.fr       */
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
int			order_check(t_node **a);
t_node		*parser(int ac, const char **av);
void		swap(t_node **stack, char *s);
void		swap_a_b(t_node **stack_a, t_node **stack_b);
void		push_b(t_node **stack_a, t_node **stack_b);
void		push_a(t_node **stack_a, t_node **stack_b);
void		rotate(t_node **stack, char *s);
void		rotate_a_b(t_node **stack_a, t_node **stack_b);
void		reverse_rotate(t_node **stack, char *s);
void		reverse_rotate_a_b(t_node **stack_a, t_node **stack_b);
void		alg(t_node **a, t_node **b);
int			get_max(t_node *a);
//int			get_min(t_list *a);
void		algoritmo(t_node **a, t_node **b);
t_node		*ft_lstadd_back_node(t_node *lst, t_node *new);
t_node		*ft_new_node(int *content);


#endif
