/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 00:51:33 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*tabsrc;
	char		*tabdst;

	i = 0;
	tabdst = (char*)dst;
	tabsrc = (char*)src;
	while (i < n)
	{
		tabdst[i] = tabsrc[i];
		if (tabsrc[i] == c)
			return ((void*)dst + i + 1);
		i++;
	}
	return (0);
}
