/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glarray.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:09:54 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/27 14:22:32 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_lib.h"

void		ft_get_vao(t_env *e)
{
    float vtx[] = {
        -0.5f, -0.5f, 0.0f,
         0.5f, -0.5f, 0.0f,
         0.0f,  0.5f, 0.0f
    };

	glGenVertexArrays(1, &e->vao);
	glGenBuffers(1, &e->vbo);
	glBindVertexArray(e->vao);
	glBindBuffer(GL_ARRAY_BUFFER, e->vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vtx), vtx, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0); 
    glBindVertexArray(0);
}