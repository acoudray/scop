/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_mul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 18:16:40 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/03 15:19:15 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

t_mat4	mat4_mul(t_mat4 mp, t_mat4 ms)
{
	int		i;
	int		j;
	int		k;
	t_mat4	new;

	i = -1;
	j = -1;
	k = 0;
	new = mat4_set(0.0);
	while (++i < 16)
	{
		k = i % 4;
		while (++j < 4)
			new.m[i] += mp.m[j + ((i / 4) * 4)] * ms.m[j * 4 + k];
		j = -1;
	}
	return (new);
}

t_mat4 mat4_scal(t_mat4 mp, t_mat4 ms)
{
	int i;
	t_mat4 new;

	i = -1;
	while (++i < 16)
		new.m[i] = mp.m[i] * ms.m[i];
	return (new);
}