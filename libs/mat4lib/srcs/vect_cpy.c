/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_cpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 10:12:03 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 16:06:24 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"


t_vect3	vect3_cpy(t_vect3 v)
{
	t_vect3 vect;

	vect.v[0] = v.v[0];
	vect.v[1] = v.v[1];
	vect.v[2] = v.v[2];
	return (vect);
}

t_vect4	vect4_cpy(t_vect4 v)
{
	t_vect4 vect;

	vect.v[0] = v.v[0];
	vect.v[1] = v.v[1];
	vect.v[2] = v.v[2];
	vect.v[3] = v.v[3];
	return (vect);
}
