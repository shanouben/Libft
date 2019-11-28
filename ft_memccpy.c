/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:04:42 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/15 19:44:09 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	*str2;
	char	x;

	i = -1;
	x = (char)c;
	str = (char*)src;
	str2 = (char*)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (++i < n)
	{
		str2[i] = str[i];
		if (str[i] == x)
			return ((void*)str2 + i + 1);
	}
	return (NULL);
}
