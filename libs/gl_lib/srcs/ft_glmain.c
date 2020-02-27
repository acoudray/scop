/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glmain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 13:55:06 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/27 14:22:39 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_lib.h"

void processInput(t_env *e)
{
    if(glfwGetKey(e->win, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(e->win, 1);
}

int             vtx_print(t_env *e)
{
	glUseProgram(e->shaderprogram);
	glBindVertexArray(e->vao);
	glDrawArrays(GL_TRIANGLES, 0, 3);
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
		processInput(e);
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);
		(*fct_main)(e);
		vtx_print(e);
		glfwSwapBuffers(e->win);
    	glfwPollEvents();
	}
	glfwTerminate();
}
