/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:40:09 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	norm2(t_vect v)
{
	double norm2;

	norm2 = (v.x * v.x + v.y * v.y + v.z * v.z);
	return (norm2);
}

double	norm(t_vect v)
{
	double norm;

	norm = sqrt(norm2(v));
	return (norm);
}

t_vect	normalize(t_vect v)
{
	double normv;

	normv = norm(v);
	v.x /= normv;
	v.y /= normv;
	v.z /= normv;
	return (v);
}
