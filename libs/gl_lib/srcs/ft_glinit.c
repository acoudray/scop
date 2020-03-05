/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glinit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:59:59 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/05 16:08:24 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_lib.h"

float	g_fov = 75.0;
float	g_lastX = 400;
float	g_lastY = 300;
float	g_pitch = 0.0;
float	g_yaw = 90.0;
int		g_firstMouse = 1;
t_vect3	g_front;

void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{
	(void)window;
	(void)xoffset;
  if(g_fov >= 1.0f && g_fov <= 85.0f)
        g_fov -= yoffset;
  if(g_fov <= 1.0f)
        g_fov = 1.0f;
  if(g_fov >= 85.0f)
        g_fov = 85.0f;
}

void	mouse_callback(GLFWwindow* window, double xpos, double ypos)
{
	float xoffset;
	float yoffset;
	float sensibility;

	(void)window;
	if (g_firstMouse)
	{
		g_lastX = xpos;
		g_lastY = ypos;
		g_firstMouse = 0;
	}
	sensibility = 0.5;
	xoffset = g_lastX - xpos;
	yoffset = g_lastY - ypos;
	xoffset *= sensibility;
	yoffset *= sensibility;
	g_lastX = xpos;
	g_lastY = ypos;
	g_yaw += xoffset;
	g_pitch += yoffset;
	 if(g_pitch > 89.0)
        g_pitch = 89.0;
    if(g_pitch < -89.0)
        g_pitch = -89.0;
	g_front.v[X] = cos(ft_radf(g_pitch)) * cos (ft_radf(g_yaw));
	g_front.v[Y] = sin(ft_radf(g_pitch));
	g_front.v[Z] = cos(ft_radf(g_pitch)) * sin(ft_radf(g_yaw));
	g_front = vect3_norm(g_front);
}

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

int		ft_glinitcam(t_env *e)
{
	e->camPos = vect3_new(5.0, 0.0, -10.0);
	g_front = vect3_new(0.0, 0.0, 1.0);
	e->camUp = vect3_new(0.0,1.0,0.0);
	return (0);
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
	ft_glinitcam(e);
	glEnable(GL_DEPTH_TEST);
	glfwSetInputMode(e->win, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
	framebuffer_size_callback(win_x, win_y);
	glfwSetCursorPosCallback(e->win, mouse_callback);
	glfwSetScrollCallback(e->win, scroll_callback);
	return (1);
}