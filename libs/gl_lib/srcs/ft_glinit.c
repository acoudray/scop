/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glinit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:59:59 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/27 15:49:21 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_lib.h"

void	framebuffer_size_callback(int width, int height)
{
	glViewport(0, 0, width, height);
}

void	ft_set_attr(void)
{
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, MAJOR_VERS);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, MINOR_VERS);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
}

int		init_gl(t_env *e, char *name, int win_x, int win_y)
{
	if (glfwInit() < 0)
	{
		ft_printf("{red}Error trying to init glfw{res}\n");
		glfwTerminate();
		return (0);
	}
	ft_set_attr();
	e->win = glfwCreateWindow(win_x, win_y, name, NULL, NULL);
	if (e->win == NULL)
	{
		ft_putendl("{red}Error while trying to create the window{res}\n");
		glfwTerminate();
		return (0);
	}
	glfwMakeContextCurrent(e->win);
	if (glewInit() != GLEW_OK)
	{
		ft_putendl("{red}glew init fail\n{res}");
		return (0);
	}
	framebuffer_size_callback(win_x, win_y);
	return (1);
}
