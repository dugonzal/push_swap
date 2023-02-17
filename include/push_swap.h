/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 20:53:27 by vscode            #+#    #+#             */
/*   Updated: 2023/02/17 21:09:42 by ciclo            ###   ########.fr       */
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
const char	**two_arguments(const char **av);
// error prototype
void		error_msg(char *s, int n);
void		err(const char **av, int i);
void		repeat(t_node **a, int tmp);
void		ft_max_min(const char *str);
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

/// node prototype
t_node		**ft_lstadd_back_node(t_node **lst, t_node *new);
t_node		*ft_new_node(int content);

int			get_max(t_node *a);
void		clear(t_node **head);
int			ft_sizechar(const char **av);
#endif
