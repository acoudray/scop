/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fclamp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 14:14:11 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	fclamp(double d, double min, double max)
{
	if (d > max)
		d = max;
	if (d < min)
		d = min;
	return (d);
}
