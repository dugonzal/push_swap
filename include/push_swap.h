/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:53:27 by vscode            #+#    #+#             */
/*   Updated: 2022/12/04 18:26:13 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include "../libft/include/libft.h"

//control de errores prototype

void		error_msg(char *s, int n);
void		err(const char **av, int i, int ac);
void		repeat(t_list *a, int *tmp);
void		check_int_max_min(const char *str);
void		ver(t_list *a);
int			order_check(t_list **a);
t_list		*parser(int ac, const char **av);
void		swap(t_list **stack, char *s);
void		swap_a_b(t_list **stack_a, t_list **stack_b);
void		push_b(t_list **stack_a, t_list **stack_b);
void		push_a(t_list **stack_a, t_list **stack_b);
void		rotate(t_list **stack, char *s);
void		rotate_a_b(t_list **stack_a, t_list **stack_b);
void		reverse_rotate(t_list **stack, char *s);
void		reverse_rotate_a_b(t_list **stack_a, t_list **stack_b);
void		small_alg(t_list **a);
void		ft_qsort(t_list **a, t_list **b, int len);
int			getMax(t_list *a);
int			getMin(t_list *a);


#endif
