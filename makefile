# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 20:54:24 by ciclo             #+#    #+#              #
#    Updated: 2022/11/18 10:23:20 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := gcc
RM := rm -rf
FLAGS := -Wall -Werror -Wextra
SRC_DIR := src/
OBJ_DIR := obj/
T = time
# *****************#
#----debuggers-----#
# *****************#
SANI := -fsanitize=address -g3
val :=  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

SRC_FILES := push_swap utils errors create_stack

SRC := $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ := obj/push_swap.o utils errors create_stack
OBJ := $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJF := .cache_exists

$(NAME): $(OBJ)
	@make -C libft
	@mkdir -p obj_library
	@mv libft/libft.a ./obj_library
	@$(CC) $(SANI) $(FLAGS) $(SRC) obj_library/libft.a -o $@
	@echo "$@ done compile"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
	@$(CC) $(FLAGS) -c $< -o $@
# -c compila el codigo pero no lo linkea
# -o es para poner el nombre del archivo de salida
# $< es el primer elemento de la lista de dependencias de la regla obj
# $@ es el nombre del archivo objetivo: en este caso seria el nombre del ejecutable push_swap

$(OBJF):
	@mkdir -p $(OBJ_DIR)

all: $(NAME)

clean:
	@$(RM) $(OBJ_DIR)
	@make clean -C libft
	@$(RM) libft.a

fclean: clean
	@make fclean -C libft
	@$(RM) obj_library
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
