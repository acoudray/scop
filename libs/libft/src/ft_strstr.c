/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:28:37 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(little);
	if (little[0] == '\0')
		return ((char*)big);
	while (big[i])
	{
		if (big[i] == little[0])
		{
			big = &big[i];
			if ((ft_strncmp(big, little, j)) == 0)
				return ((char*)big);
			i = 1;
		}
		else
			i++;
	}
	return (0);
}
