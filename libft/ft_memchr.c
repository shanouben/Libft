/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:06:20 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/15 19:44:11 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	p;

	str = (char *)s;
	p = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == p)
			return (str + i);
		i++;
	}
	return (NULL);
}
