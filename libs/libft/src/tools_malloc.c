/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_malloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoudray <acoudray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:49:28 by acoudray          #+#    #+#             */
/*   Updated: 2020/02/25 14:30:53 by acoudray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_malloc.h"


void	*return_and_unlockmutex(void *ret)
{
	pthread_mutex_unlock(&g_mut);
	return (ret);
}
