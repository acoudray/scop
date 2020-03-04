/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_perspective.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 16:17:07 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/03 16:38:07 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mat4lib.h"

t_mat4 mat4_perspective(float fov, float aspect, float near, float far)
{
    float zrange;
    float t_halffov;
    t_mat4 new;

    t_halffov = tanf((fov / 2) * (PI / 180.0));
    zrange = near - far;
    new = mat4_set(0);
    new.m[0] = 1.0 / (t_halffov * aspect);
    new.m[5] = 1.0 / t_halffov;
    new.m[10] = (-near - far) / zrange;
    new.m[11] = 2.0 * far * near / zrange;
    new.m[14] = 1.0;
    return (new);
}