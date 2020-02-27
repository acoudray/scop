/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uiclamp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 15:28:04 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	uiclamp(unsigned int *ui, unsigned int min, unsigned int max)
{
	if (*ui > max)
		*ui = max;
	if (*ui < min)
		*ui = min;
}

void	iclamp(int *ui, int min, int max)
{
	if (*ui > max)
		*ui = max;
	if (*ui < min)
		*ui = min;
}
