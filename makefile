# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 20:54:24 by vscode            #+#    #+#              #
#    Updated: 2022/11/12 20:37:12 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC = gcc
RM = rm -rf
FLAGS = -Wall -Werror -Wextra
SRC_DIR = src/
OBJ_DIR = obj/
# *****************#
#-------debuggers--#
#------debuggers---#
# *****************#
SANI := -fsanitize=address -g3
val :=  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

SRC_FILES = push_swap utils errors

SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
#aprender mas sobre objetos
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

$(NAME): $(OBJ)
	make -C libft
	mkdir -p obj_library
	mv libft/libft.a ./obj_library
	$(CC) $(FLAGS) $(SRC) obj_library/libft.a -o $@
	@echo "$@ done compile"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	mkdir -p $(OBJ_DIR) 2> /dev/null || true
	$(CC) $(FLAGS) -c $< -o $@
	@echo "$(GREEN)Creando la carpeta de objetos $<$(RESET)"
# -c compila el codigo pero no lo linkea
# -o es para poner el nombre del archivo de salida
# $< es el primer elemento de la lista de dependencias de la regla obj
# $@ es el nombre del archivo objetivo: en este caso seria el nombre del ejecutable push_swap

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)
	make clean -C libft
	$(RM) libft.a

fclean: clean
	make fclean -C libft
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
