NAME = gl_lib.a

SRC_PATH = ./srcs/

SRC_NAME = ft_glinit.c \
			ft_glmain.c \
			ft_glarray.c \
			ft_glshader.c	

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
CPPFLAGS = -I includes -I ../libft/includes -I ../glew-2.1.0/include/GL/ -I ../GLFW/


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