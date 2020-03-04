/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:01:19 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/03 13:12:51 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

void vect3_set(t_vect3 *v, float set)
{
    int i;

    i = -1;
    while (++i < 3)
        v->v[i] = set;
}

void vect4_set(t_vect4 *v, float set)
{
    int i;

    i = -1;
    while (++i < 4)
        v->v[i] = set;
}

t_vect3 vect3_new(float v1, float v2, float v3)
{
    t_vect3 new;

    new.v[X] = v1;
    new.v[Y] = v2;
    new.v[Z] = v3;
    return (new);
}

t_vect4 vect4_new(float v1, float v2, float v3)
{
    t_vect4 new;
    
    new.v[X] = v1;
    new.v[Y] = v2;
    new.v[Z] = v3;
    new.v[3] = 1.0f;
    return (new);
}