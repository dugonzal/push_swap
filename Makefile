# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 15:04:24 by ciclo             #+#    #+#              #
#    Updated: 2023/02/15 16:06:15 by ciclo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#voy a hacer el makefile del push swap

NAME := push_swap
CC := clang -g3
FLAGS := #-Wall -Werror -Wextra
SRC_DIR := src/
OBJ_DIR := obj/

SRC_FILES = push_swap
## para separar los archivos y ponerles antes y despues .o y .c
### tnemos que usar adprefix y adsufix
#SRC := $(addprefix(SRC_FILES), $(addsuffix .c $(SRC_FILES)))
#OBJ :=  $(addprefix(OBJ_FILES), $(addsuffix .o $(SRC_FILES)))

OBJF := .cache_exists

SRC := $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ := $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

$(NAME) : $(OBJ)
	mkdir -p ./bin obj
	make -C libft
	mv libft/libft.a ./bin
	mkdir -p $(OBJ_DIR)
	$(CC) $(FLAGS) $(SRC)  ./bin/libft.a -o $@

$(OBJF):$(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
		$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:

fclean:

re:

.PHONY:
