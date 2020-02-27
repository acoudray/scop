/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_preci_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:12:50 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		sz_preci(char *str, int i)
{
	int count;

	count = 0;
	if (str[i] == '.')
		while (ft_isdigit(str[i++ + 1]))
			count++;
	else
		return (0);
	return (count + 1);
}

int		ft_fill_precision(char *format, t_fid *fid, int pos)
{
	int count;
	int tmp;

	tmp = 0;
	count = 0;
	if (format[++pos] == '.')
	{
		fid->is_prec = 1;
		count++;
		fid->len_fid++;
		if (!ft_isdigit(format[pos + 1]))
			fid->max_width = 0;
		while (ft_isdigit(format[++pos]))
		{
			tmp *= 10;
			tmp += format[pos] - 48;
			fid->len_fid++;
			count++;
		}
		fid->max_width = tmp;
	}
	return (count);
}
