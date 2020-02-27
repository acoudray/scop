/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:24:42 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vect	vectsub(t_vect vect1, t_vect vect2)
{
	vect1.x -= vect2.x;
	vect1.y -= vect2.y;
	vect1.z -= vect2.z;
	return (vect1);
}
