/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glmain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:55:06 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/05 16:04:31 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_lib.h"

void	ft_glframe(t_env *e)
{
	float currentTime;

	currentTime = glfwGetTime();
	e->deltaTime = currentTime - e->lastTime;
	e->lastTime = currentTime;
}


void processInput(t_env *e)
{
	float camSpeed = 0.05f;

    if (glfwGetKey(e->win, GLFW_KEY_W) == GLFW_PRESS)
        e->camPos = vect3_add(e->camPos, vect3_scale(e->camFront, camSpeed));
    if (glfwGetKey(e->win, GLFW_KEY_S) == GLFW_PRESS)
        e->camPos = vect3_sub(e->camPos, vect3_scale(e->camFront, camSpeed));
    if (glfwGetKey(e->win, GLFW_KEY_A) == GLFW_PRESS)
		e->camPos = vect3_add(e->camPos, vect3_scale(vect3_norm(vect3_cross(e->camFront,e->camUp)), camSpeed));
    if (glfwGetKey(e->win, GLFW_KEY_D) == GLFW_PRESS)
        e->camPos = vect3_sub(e->camPos, vect3_scale(vect3_norm(vect3_cross(e->camFront,e->camUp)), camSpeed));
    if(glfwGetKey(e->win, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(e->win, 1);
}

int             vtx_print(t_env *e)
{
	t_vect3 tabvect[100];
	int i = -1;

	while (++i < 100)
		tabvect[i] = vect3_new(i % 10, i / 10, 0.0);
	i = -1;
	e->view = ft_gllookat(e);
	e->projection = mat4_perspective(g_fov, e->width / e->height, 0.1, 1000.0);
	while (++i < 100)
	{
		e->model = mat4_trans(tabvect[i]);	
		e->model = mat4_mul(e->model, mat4_rotate((float)glfwGetTime() * ft_radf(300.0), vect3_new(0.5, 1.0, 0.0)));
		glUseProgram(e->shaderprogram);
		ft_glUniformMat(e);
		glBindVertexArray(e->vao);
		//glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		glDrawArrays(GL_TRIANGLES, 0, 36);
	}
	return (0);
}

void		gl_loop(t_env *e, int (*fct_main)(t_env*))
{
	if (ft_get_shadersource(e) == -1)
	{
		glfwTerminate();
		return;
	}
	ft_get_vao(e);
	while(!glfwWindowShouldClose(e->win))
	{
		ft_glframe(e);
		processInput(e);
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		(*fct_main)(e);
		vtx_print(e);
		glfwSwapBuffers(e->win);
    	glfwPollEvents();
	}
	glfwTerminate();
}
