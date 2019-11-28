/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:16:15 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/19 19:36:38 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && (i + j) < len)
			{
				if (to_find[j + 1] == '\0')
					return ((char *)str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
