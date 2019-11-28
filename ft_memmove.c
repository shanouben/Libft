/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:49:57 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/21 14:44:06 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*t;
	const char	*s;

	t = (char *)dst;
	s = (const char *)src;
	i = 1;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
	while (i <= len)
	{
		t[len - i] = s[len - i];
		i++;
	}
	return ((void *)t);
}
