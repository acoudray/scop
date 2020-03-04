/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_scaling.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 14:59:35 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/03 15:03:23 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mat4lib.h"

t_mat4 mat4_scaling(t_vect3 v)
{
    t_mat4 new;

    new.m[0] = v.v[X];
    new.m[1] = 0;
    new.m[2] = 0;
    new.m[3] = 0;
    new.m[4] = 0;
    new.m[5] = v.v[Y];
    new.m[6] = 0;
    new.m[7] = 0;
    new.m[8] = 0;
    new.m[9] = 0;
    new.m[10] = v.v[Z];
    new.m[11] = 0;
    new.m[12] = 0;
    new.m[13] = 0;
    new.m[14] = 0;
    new.m[15] = 1;
    return (new);
}