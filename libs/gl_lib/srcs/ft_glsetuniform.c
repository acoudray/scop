/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glsetuniform.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:22:04 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/04 15:51:03 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_lib.h"

void    ft_glUniformMat(t_env *e)
{
    unsigned int modelLoc = glGetUniformLocation(e->shaderprogram, "model");
	unsigned int viewLoc = glGetUniformLocation(e->shaderprogram, "view");
	unsigned int projectionLoc = glGetUniformLocation(e->shaderprogram, "projection");

    glUniformMatrix4fv(modelLoc, 1, GL_TRUE, e->model.m);
	glUniformMatrix4fv(viewLoc, 1, GL_TRUE, e->view.m);
	glUniformMatrix4fv(projectionLoc, 1, GL_TRUE, e->projection.m);
}

void    ft_glsetInt(t_env *e, const char *name, int value)
{
    glUniform1i(glGetUniformLocation(e->shaderprogram, name), value);
}

void    ft_glsetFloat(t_env *e, const char *name, float value)
{
    glUniform1f(glGetUniformLocation(e->shaderprogram, name), value);
}