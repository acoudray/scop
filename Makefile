NAME = scop

CPP = gcc

NAME = scop
CPP = gcc
SDLFLAGS = -framework Cocoa -framework OpenGL -framework IOKit
LIBS_A = ./libs/libft/libft.a \
			./libs/glew-2.1.0/lib/libGLEW.a \
			./libs/libglfw3.a \
			./libs/gl_lib/gl_lib.a \
			./libs/mat4lib/mat4lib.a \

SDL2_HEADER = -I ./libs/GLFW/ \
				-I ./libs/glew-2.1.0/include/GL/

CFLAGS = -Wall -Wextra -Werror -g
HEADER = includes
SOURCES =   main.c

DIR_O = obj

DIR_S = srcs

LIB = libs/libft
GL_LIB = libs/gl_lib
MAT4LIB = libs/mat4lib

LIBINC = -I libs/libft/includes \
			-I libs/gl_lib/includes \
			-I libs/mat4lib/includes \

SRCS = $(addprefix $(DIR_S)/,$(SOURCES))
OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.c=.o))

all: obj $(NAME)

${NAME}: $(OBJS)
	@make -C $(LIB)
	@make -C $(GL_LIB)
	@make -C $(MAT4LIB)
	@${CPP} $(CFLAGS) -o $@ $^ -L $(LIB) $(SDLFLAGS) $(SDL2_HEADER) $(LIBS_A)

$(DIR_O)/%.o: $(DIR_S)/%.c
	$(CPP) $(CFLAGS) -I $(HEADER) $(SDL2_HEADER) $(LIBINC) -c -o $@ $<

obj:
	mkdir -p obj

clean:
	rm -rf obj
	make -C $(LIB) clean
	make -C $(GL_LIB) clean
	make -C $(MAT4LIB) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(LIB) fclean
	make -C $(GL_LIB) fclean
	make -C $(MAT4LIB) fclean
re: clean fclean all
.PHONY: all $(NAME)
