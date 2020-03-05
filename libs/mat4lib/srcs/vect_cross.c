/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_cross.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:42:25 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/05 12:20:59 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

t_vect3 vect3_cross(t_vect3 v1, t_vect3 v2)
{
	t_vect3 cross;

	cross.v[X] = (v1.v[Y] * v2.v[Z]) - (v1.v[Z] * v2.v[Y]);
	cross.v[Y] = (v1.v[Z] * v2.v[X]) - (v1.v[X] * v2.v[Z]);
	cross.v[Z] = (v1.v[X] * v2.v[Y]) - (v1.v[Y] * v2.v[X]);
	return (cross);
}