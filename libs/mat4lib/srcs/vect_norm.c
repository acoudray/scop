/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:24:54 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 16:55:57 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

t_vect3 vect3_norm(t_vect3 v)
{
    int x;
    t_vect3 new;
    int i;

    i = -1;
    x = vect3_long(v);
    while (++i < 3)
        new.v[i] = v.v[i] / x;
    return (new);
}

t_vect4 vect4_norm(t_vect4 v)
{
    t_vect4 new;
    int i;

    i = -1;
    while (++i < 3)
        new.v[i] = v.v[i] / v.v[3];
    new.v[3] = v.v[3];
    return (new);
}
