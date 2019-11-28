/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 19:10:22 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/28 14:31:57 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(t = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start < (size_t)ft_strlen(s))
		while (s[start] && i < len)
		{
			t[i++] = s[start++];
		}
	t[i] = '\0';
	return (t);
}
