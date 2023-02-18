# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 20:54:24 by ciclo             #+#    #+#              #
#    Updated: 2023/02/18 15:13:54 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= push_swap
CC		:= clang -g3
RM		:= rm -rf
FLAGS	:= -Wall -Werror -Wextra
SRC_DIR	:= src/
OBJ_DIR	:= obj/
T		:= time
# *****************#
#----debuggers-----#
# *****************#
SANI	:= -fsanitize=address -g3
val		:=  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

SRC_FILES := push_swap utils errors reverse_rotate swap push rotate alg parser index

SRC		:= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ		:= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))


$(NAME): $(OBJ)
	@make -C libft
	@mkdir -p bin
	@mv libft/libft.a ./bin
	@$(CC) $(FLAGS) $(SRC) bin/* -o $@
	@echo "$@ done compile"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@
# -c compila pero no linkea
# -o especifica el nombre del archivo objetivo
# $< es el nombre del archivo fuente: en este caso seria el nombre de la regla
# $@ es el nombre del archivo objetivo: en este caso seria el nombre de la regla

$(OBJ_DIR):
	@mkdir -p $@

all: $(NAME)

clean:
	@$(RM) $(OBJ_DIR)
	@make clean -C libft
	@$(RM) libft.a

fclean: clean
	@make fclean -C libft
	@$(RM) bin
	@$(RM) $(NAME)

re: fclean all

val:
	$(val) ./$(NAME) 3 2 1

sani:
	$(CC) $(SANI) $(FLAGS) $(SRC) bin/* -o $(NAME)

.PHONY: clean fclean re all
