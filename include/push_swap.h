/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dugonzal <dugonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:53:27 by vscode            #+#    #+#             */
/*   Updated: 2023/02/20 02:35:40 by dugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

# include "../libft/include/libft.h"

typedef struct s_node
{
	int				content;
	int				index;
	struct s_node	*next;
}				t_node;
//control de errores prototype
# define GREEN	"\033[0;32m"
# define RED 	"\033[1;31m"
# define GREY 	"\033[0;90m"
# define CYAN	"\033[1;96m"
# define RESET 	"\033[0m"

// control de errores prototype
void		parser(t_node **a, int ac, const char **av);
// error prototype
void		error_msg(void);
void		err(const char **av, int i, t_node **a);
void		repeat(t_node **a, int tmp);
void		ft_max_min(const char *str, t_node **a);
void		ver(t_node **a);
int			order_check(t_node **a);
// moves prototype
void		swap(t_node **stack, char *s);
void		swap_a_b(t_node **stack_a, t_node **stack_b);
void		push_b(t_node **stack_a, t_node **stack_b);
void		push_a(t_node **stack_a, t_node **stack_b);
void		rotate(t_node **stack, char *s);
void		rotate_a_b(t_node **stack_a, t_node **stack_b);
void		reverse_rotate(t_node **stack, char *s);
void		reverse_rotate_a_b(t_node **stack_a, t_node **stack_b);

void		sort(t_node **a, t_node **b);
void		alg(t_node **a, t_node **b);
// index prototype
void		index_stack(t_node **a);
int			get_max(t_node *a);
void		clear(t_node **head);
int			ft_sizechar(const char **av);
int			ft_size(t_node *head);
int			get_min(t_node *ac);
t_node		*lst_node(t_node *a);
#endif
