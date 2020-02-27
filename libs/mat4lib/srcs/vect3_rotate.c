/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect3_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:53:29 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 16:07:08 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

t_vect3	rotate_x(t_vect3 v, float angle)
{
	double	y_tmp;
	double	z_tmp;

	angle = (angle * (M_PI / 180));
	y_tmp = v.v[1];
	z_tmp = v.v[2];
	v.v[1] = y_tmp * cos(angle) - z_tmp * sin(angle);
	v.v[2] = y_tmp * sin(angle) + z_tmp * cos(angle);
	return (v);
}

t_vect3	rotate_y(t_vect3 v, float angle)
{
	double	x_tmp;
	double	z_tmp;

	angle = (angle * (M_PI / 180));
	x_tmp = v.v[0];
	z_tmp = v.v[2];
	v.v[2] = z_tmp * cos(angle) - x_tmp * sin(angle);
	v.v[0] = z_tmp * sin(angle) + x_tmp * cos(angle);
	return (v);
}

t_vect3	rotate_z(t_vect3 v, float angle)
{
	double	x_tmp;
	double	y_tmp;

	angle = (angle * (M_PI / 180));
	x_tmp = v.v[0];
	y_tmp = v.v[1];
	v.v[0] = x_tmp * cos(angle) - y_tmp * sin(angle);
	v.v[1] = x_tmp * sin(angle) + y_tmp * cos(angle);
	return (v);
}

t_vect3	vect3_rotate(t_vect3 v, t_vect3 angle)
{
	v = rotate_x(v, -(angle.v[0]));
	v = rotate_y(v, -(angle.v[1]));
	v = rotate_z(v, -(angle.v[2]));
	return (v);
}

t_vect3	vect3_rotateinv(t_vect3 v, t_vect3 angle)
{
	v = rotate_z(v, (angle.v[0]));
	v = rotate_y(v, (angle.v[1]));
	v = rotate_x(v, (angle.v[2]));
	return (v);
}
