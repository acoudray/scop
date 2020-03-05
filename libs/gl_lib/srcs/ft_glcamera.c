/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glcamera.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:24:05 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/05 15:28:34 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "gl_lib.h"

t_mat4 ft_matlook(t_vect3 camDir, t_vect3 camRight, t_vect3 camUp)
{
    t_mat4 new;
    t_vect3 vects[3];
    int i;
    int j;

    i = -1;
    j = -1;
    new = mat4_set(0);
    vects[0] = camRight;
    vects[1] = camUp;
    vects[2] = camDir;
    while (++j < 3)
    {
        while (++i < 3)
            new.m[i + (j * 4)] = vects[j].v[i];
        i = -1;
    }
    new.m[15] = 1;
    return (new);
}

t_mat4 ft_gllookat(t_env *e)
{
    t_vect3 camDir;
    t_vect3 camRight;
    t_vect3 camUp;
    t_mat4  new;
    t_mat4  trans;

    e->camFront = g_front;
    camDir = vect3_norm(vect3_sub(e->camPos, vect3_sub(e->camPos, e->camFront)));
    camRight = vect3_norm(vect3_cross(e->camUp, camDir));
    camUp = vect3_cross(camDir, camRight);
    new = ft_matlook(camDir, camRight, camUp);
    trans = mat4_trans(vect3_scale(e->camPos, -1));
    new = mat4_mul(new, trans);
    return (new);
}