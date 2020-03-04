/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gl_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:06:45 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/04 15:49:33 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GL_LIB_H
# define GL_LIB_H

# define GL_SILENCE_DEPRECATION
# include "glew.h"
# include "glfw3.h"
# include <math.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"
# include "mat4lib.h"

# define SHADER 0
# define PROGRAM 1
# define MAJOR_VERS 4
# define MINOR_VERS 1

typedef struct		s_env
{
	GLFWwindow		*win;
	unsigned int	shaderprogram;
	unsigned int	vao;
	unsigned int	vbo;
	unsigned int 	ebo;
	int				height;
	int				width;
	t_mat4			view;
	t_mat4			model;
	t_mat4			projection;
}					t_env;

void			ft_glUniformMat(t_env *e);
void			gl_loop(t_env *e, int (*fct_main)(t_env*));
int         	init_gl(t_env *e, char *name, int win_x, int win_y);
int 			vtx_print(t_env *e);
GLchar const *  get_shader(const char *path);
int				debug_shader(unsigned int shader, int i);
void			framebuffer_size_callback(int width, int height);
int				shader_init(GLchar const *shadersource, unsigned int shadertype, unsigned int *shader);
void			ft_set_attr();
void			processInput(t_env *e);
int		 		ft_get_shadersource(t_env *e);
void			ft_get_vao(t_env *e);
void			ft_glsetFloat(t_env *e, const char *name, float value);
void			ft_glsetInt(t_env *e, const char *name, int value);

#endif