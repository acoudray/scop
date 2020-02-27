/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 16:01:19 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/19 16:39:55 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4lib.h"

void vect3_set(t_vect3 *v, float set)
{
    int i;

    i = -1;
    while (++i < 3)
        v->v[i] = set;
}

void vect4_set(t_vect4 *v, float set)
{
    int i;

    i = -1;
    while (++i < 4)
        v->v[i] = set;
}
