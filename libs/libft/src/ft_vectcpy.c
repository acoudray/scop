/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 10:12:03 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vect	vectcpy(t_vect v)
{
	t_vect vect;

	vect.x = v.x;
	vect.y = v.y;
	vect.z = v.z;
	return (vect);
}
