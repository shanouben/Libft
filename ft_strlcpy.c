/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:28:05 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/15 20:01:31 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;

	i = 0;
	if (dst == NULL)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && --size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
