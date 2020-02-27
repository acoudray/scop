/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_mul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 18:16:40 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 15:16:14 by gmachena         ###   ########.fr       */
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
	while (++i < 16)
	{
		k = i % 4;
		while (++j < 4)
			new.m[i] += mp.m[j + ((i / 4) * 4)] * ms.m[j * 4 + k];
		j = -1;
	}
	return (new);
}