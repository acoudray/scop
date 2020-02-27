/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmachena <gmachena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:23:28 by gmachena          #+#    #+#             */
/*   Updated: 2020/02/25 10:27:45 by gmachena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char **dest, const char *src)
{
	char	*tmp;

	tmp = ft_strjoin(*dest, src);
	if (*dest == NULL)
		ft_strdel(dest);
	*dest = tmp;
	return (*dest);
}