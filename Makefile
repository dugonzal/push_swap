# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 15:04:24 by ciclo             #+#    #+#              #
#    Updated: 2023/02/16 11:47:19 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#voy a hacer el makefile del push swap
NAME := push_swap
CC := clang -g3
FLAGS := -Wall -Werror -Wextra
SRC_DIR := src/
OBJ_DIR := obj/
R =	rm -rf

SRC_FILES = push_swap
## para separar los archivos y ponerles antes y despues .o y .c

########## usamos subfijos y prefijos para los %.o & %.c <-------
SRC := $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ := $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

$(NAME) : $(OBJ)
	@mkdir -p ./bin obj
	@make -C libft
	@mv libft/libft.a ./bin
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) $(SRC) ./bin/* -o $@

$(OBJ):$(OBJ_DIR) # regla de los objetos

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
		$(CC) $(FLAGS) -c $< -o $@
# -- <@ -- son los ejecutables

all: $(NAME)

clean:
	@$(R) push_swap

fclean: clean
	@$(R) bin

re: fclean all

#no se porque usararia esto ahora la verdad
.PHONY: fclean re
