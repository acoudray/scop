/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 11:21:24 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/03 16:36:25 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scop.h"

int myfunct(t_env *e)
{
    unsigned int o;
    o = e->vbo;
    return (0);
}

int main(void)
{
    t_env *e;

    e = malloc(sizeof(t_env) * 1);
    e->vao = 0;
    e->vbo = 0;
    e->height = WIN_Y;
    e->width = WIN_X;
    e->shaderprogram = 0;
    if (init_gl(e, NAME, WIN_X, WIN_Y))
        gl_loop(e, &myfunct);
    return (0);
}