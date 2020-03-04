/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:30:07 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/04 14:41:03 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mat4lib.h"

// x = 0.5
// y = 1.0
// z = 0.5

t_mat4 mat4_rotate(float theta, t_vect3 v)
{
    t_mat4  new;
    float   cos_t;
    float   sin_t;

    cos_t = cosf(theta);
    sin_t = sinf(theta);
    v = vect3_norm(v);
    new.m[0] = cos_t + (v.v[X] * v.v[X]) * (1.0 - cos_t);
    new.m[1] = v.v[X] * v.v[Y] * (1.0 - cos_t) - v.v[Z] * sin_t;
    new.m[2] = v.v[X] * v.v[Z] * (1.0 - cos_t) + v.v[Y] * sin_t;
    new.m[3] = 0.0;
    new.m[4] = v.v[X] * v.v[Y] * (1.0 - cos_t) + v.v[Z] * sin_t;
    new.m[5] = cos_t + (v.v[Y] * v.v[Y]) * (1.0 - cos_t);
    new.m[6] = v.v[Y] * v.v[Z] * (1.0 - cos_t) - v.v[X] * sin_t;
    new.m[7] = 0.0;
    new.m[8] = v.v[X] * v.v[Z] * (1.0 - cos_t) - v.v[Y] * sin_t;
    new.m[9] = v.v[Y] * v.v[Z] * (1.0 - cos_t) + v.v[X] * sin_t;
    new.m[10] = cos_t + (v.v[Z] * v.v[Z]) * (1.0 - cos_t);
    new.m[11] = 0.0;
    new.m[12] = 0.0;
    new.m[13] = 0.0;
    new.m[14] = 0.0;
    new.m[15] = 1.0;
    return (new);
}

/*{
    -0.44
    
}*/