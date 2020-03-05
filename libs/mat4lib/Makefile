# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 18:15:29 by gmachena          #+#    #+#              #
#    Updated: 2020/03/05 10:21:47 by gmachena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mat4lib.a

SRC_PATH = ./srcs/

SRC_NAME = matvect_mul.c \
			mat4_mul.c	\
			vect_add.c \
			vect_mul.c \
			vect_sub.c \
			vect_cpy.c \
			vect_scale.c \
			vect_set.c	\
			vect_long.c	\
			vect_norm.c	\
			vect_dot.c	\
			vect_cross.c \
			vect3_rotate.c \
			mat4_idset.c \
			mat4_rotate.c \
			mat4_scaling.c \
			mat4_trans.c \
			mat4_perspective.c \
			ft_radian.c

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
CPPFLAGS = -I includes


all: $(NAME)

$(NAME): $(OBJ)
	-@ar -r $@ $^ 2> /dev/null || true
	@ranlib $@
	@echo "mat4lib compilée."

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	-@rm -fv $(OBJ) 2> /dev/null || true
	-@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	-@rm -fv $(NAME) 2> /dev/null || true

re: fclean all

.PHONY: all, clean, fclean, re