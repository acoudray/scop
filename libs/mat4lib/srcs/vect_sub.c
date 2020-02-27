/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_sub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:24:42 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 15:52:34 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

t_vect3	vect3_sub(t_vect3 v1, t_vect3 v2)
{
	v1.v[0] -= v2.v[0];
	v1.v[1] -= v2.v[1];
	v1.v[2] -= v2.v[2];
	return (v1);
}

t_vect4	vect4_sub(t_vect4 v1, t_vect4 v2)
{
	v1.v[0] -= v2.v[0];
	v1.v[1] -= v2.v[1];
	v1.v[2] -= v2.v[2];
	v1.v[3] -= v2.v[3];
	return (v1);
}