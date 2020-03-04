/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glarray.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:09:54 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/03 17:21:57 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gl_lib.h"

void		ft_get_vao(t_env *e)
{
    //  float vtx[] = {0.5f, -0.5f, 0.0f,  1.0f, 0.0f, 0.0f,   // bottom right
    //  -0.5f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f, 0.0f,  0.5f, 0.0f,  0.0f, 0.0f, 1.0f    // top 
	//  };
	// unsigned int indi[] = {  
    //     0, 1, 3, // first triangle
    //     1, 2, 3  // second triangle
    // };
	// unsigned int indi[] = {  
    //     0, 1, 3, // first triangle // second triangle
    // };
	// float vtx[] = {
    // // positions          // colors           // texture coords
    //  0.5f,  0.5f, 0.0f,   1.0f, 0.0f, 0.0f,   // top right
    //  0.5f, -0.5f, 0.0f,   0.0f, 1.0f, 0.0f,   // bottom right
    // -0.5f, -0.5f, 0.0f,   0.0f, 0.0f, 1.0f,  // bottom left
    // -0.5f,  0.5f, 0.0f,   1.0f, 1.0f, 0.0f  // top left 
	// };
	float vtx[] = {
    -0.5f, -0.5f, -0.5f,  1.0f, 0.0f, 0.0f,
     0.5f, -0.5f, -0.5f,  0.0f, 1.0f, 0.0f,
     0.5f,  0.5f, -0.5f,  0.0f, 0.0f, 1.0f,
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 0.0f,
    -0.5f,  0.5f, -0.5f,  1.0f, 0.0f, 0.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, 0.0f,

    -0.5f, -0.5f,  0.5f,  0.0f, 0.0f, 1.0f,
     0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 0.0f,
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f, 0.0f,
     0.5f,  0.5f,  0.5f,  0.0f, 1.0f, 0.0f,
    -0.5f,  0.5f,  0.5f,  0.0f, 0.0f, 1.0f,
    -0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 0.0f,

    -0.5f,  0.5f,  0.5f,  1.0f, 0.0f, 0.0f,
    -0.5f,  0.5f, -0.5f,  0.0f, 1.0f, 0.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, 0.0f, 1.0f,
    -0.5f, -0.5f, -0.5f,  1.0f, 1.0f, 0.0f,
    -0.5f, -0.5f,  0.5f,  1.0f, 0.0f, 0.0f,
    -0.5f,  0.5f,  0.5f,  0.0f, 1.0f, 0.0f,

     0.5f,  0.5f,  0.5f,  0.0f, 0.0f, 1.0f,
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 0.0f,
     0.5f, -0.5f, -0.5f,  1.0f, 0.0f, 0.0f,
     0.5f, -0.5f, -0.5f,  0.0f, 1.0f, 0.0f,
     0.5f, -0.5f,  0.5f,  0.0f, 0.0f, 1.0f,
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f, 1.0f,

    -0.5f, -0.5f, -0.5f,  1.0f, 0.0f, 0.0f,
     0.5f, -0.5f, -0.5f,  0.0f, 1.0f, 0.0f,
     0.5f, -0.5f,  0.5f,  0.0f, 0.0f, 1.0f,
     0.5f, -0.5f,  0.5f,  1.0f, 1.0f, 0.0f,
    -0.5f, -0.5f,  0.5f,  1.0f, 0.0f, 0.0f,
    -0.5f, -0.5f, -0.5f,  0.0f, 1.0f, 0.0f,

    -0.5f,  0.5f, -0.5f,  0.0f, 0.0f, 1.0f,
     0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 0.0f,
     0.5f,  0.5f,  0.5f,  1.0f, 0.0f, 0.0f,
     0.5f,  0.5f,  0.5f,  0.0f, 1.0f, 0.0f,
    -0.5f,  0.5f,  0.5f,  0.0f, 0.0f, 1.0f,
    -0.5f,  0.5f, -0.5f,  1.0f, 1.0f, 0.0f
};
	glGenVertexArrays(1, &e->vao);
	glGenBuffers(1, &e->vbo);
	// glGenBuffers(1, &e->ebo);
	
	glBindVertexArray(e->vao);
	
	glBindBuffer(GL_ARRAY_BUFFER, e->vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vtx), vtx, GL_STATIC_DRAW);
	
	// glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, e->ebo);
	// glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indi), indi, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(1);
}
