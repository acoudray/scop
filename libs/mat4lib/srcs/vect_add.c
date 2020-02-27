/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:35:40 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 16:11:19 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

t_vect3	vect3_add(t_vect3 v1, t_vect3 v2)
{
	int i;

	i = -1;
	while (++i < 3)
		v1.v[i] += v2.v[i];
	return (v1);
}

t_vect4	vect4_add(t_vect4 v1, t_vect4 v2)
{
	int i;

	i = -1;
	while (++i < 4)
		v1.v[i] += v2.v[i];
	return (v1);
}
