/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_scale.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:55:21 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 15:56:14 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

t_vect3	vect3_scale(t_vect3 v, double scale)
{
    v.v[0] *= scale;
    v.v[1] *= scale;
    v.v[2] *= scale;
    return (v);
}

t_vect4	vect4_scale(t_vect4 v, double scale)
{
    v.v[0] *= scale;
    v.v[1] *= scale;
    v.v[2] *= scale;
    v.v[3] *= scale;
    return (v);
}
