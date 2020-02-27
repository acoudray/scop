/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoui_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:31:55 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

unsigned long		ft_atoui_base(const char *str, const char *base)
{
	int				i;
	unsigned long	result;
	int				base_n;

	if (!str)
		return (0);
	result = 0;
	base_n = ft_in_base('\0', base);
	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (ft_in_base(str[i], base) != -1 && str[i])
		result = result * base_n + ft_in_base(str[i++], base);
	if (ft_in_base(str[i], base) == -1)
		return (0);
	return (result);
}
