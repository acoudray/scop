/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glinit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:59:59 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/27 14:22:43 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_lib.h"

void	framebuffer_size_callback(int width, int height)
{
    glViewport(0, 0, width, height);
}

void	ft_set_attr()
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
		ft_putendl("Erreur lors de l'initialisation de glfw");
		glfwTerminate();
		return (0);
	}
	ft_set_attr();
	e->win = glfwCreateWindow(win_x, win_y, name, NULL, NULL);
	if (e->win == NULL)
	{
		ft_putendl("Erreur lors de la création de la fenetre");
		glfwTerminate();
		return (0);
	}
	glfwMakeContextCurrent(e->win);
	if (glewInit() != GLEW_OK)
	{
		ft_putendl("glew init fail\n");
		return (0);	
	}
	framebuffer_size_callback(win_x, win_y);
	return (1);
}