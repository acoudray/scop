/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 15:05:14 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	rgb_add(unsigned int *color, unsigned int add)
{
	unsigned int r;
	unsigned int g;
	unsigned int b;
	unsigned int inv;

	inv = 255;
	*color = *color % 0x1000000;
	add = add % 0x1000000;
	r = (*color / 0x10000) + (add / 0x10000);
	uiclamp(&r, 0, 255);
	*color = *color % 0x10000;
	add = add % 0x10000;
	g = (*color / 0x100) + (add / 0x100);
	uiclamp(&g, 0, 255);
	*color = *color % 0x100;
	add = add % 0x100;
	b = *color + add;
	uiclamp(&b, 0, 255);
	*color = (inv * 0x1000000) + (r * 0x10000) + (g * 0x100) + b;
}
