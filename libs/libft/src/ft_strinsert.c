/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:18:47 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/21 17:08:57 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strinsert(char **dest, char *src, unsigned int i)
{
	char	*tmp;

	tmp = ft_strsub(*dest, 0, i);
	ft_strappend(&tmp, src);
	ft_strappend(&tmp, (*dest) + i);
	ft_strdel(dest);
	*dest = tmp;
	return (*dest);
}
