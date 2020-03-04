/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_idset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 11:57:11 by gmachena          #+#    #+#             */
/*   Updated: 2020/03/03 15:18:54 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

t_mat4 mat4_idset(void)
{
    int i;
	t_mat4 new;

	i = -1;
	while (++i < 16)
		new.m[i] = 0.0f;
	new.m[0] = 1.0f;
	new.m[5] = 1.0f;
	new.m[10] = 1.0f;
	new.m[15] = 1.0f;
	return (new);
}

t_mat4 mat4_set(float n)
{
    int i;
	t_mat4 new;

	i = -1;
	while (++i < 16)
		new.m[i] = n;
	return (new);
}