/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:46:41 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/11 14:07:41 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strrchr(const char *s, int c)
{
	int i;
	int y;

	i = 0;
	y = -1;
	if (c == '\0')
		return ((char*)s + ft_strlen(s));
	while (s[i])
	{
		if (c == s[i])
			y = i;
		i++;
	}
	if (y == -1)
		return (NULL);
	return ((char*)s + y);
}
