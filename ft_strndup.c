/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 17:32:48 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/28 15:35:20 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(const char *str, size_t n)
{
	size_t	i;
	char	*salut;

	i = 0;
	if (!(salut = (char *)malloc(sizeof(char) * (n + 1))))
		return (0);
	while (i < n && str[i])
	{
		salut[i] = str[i];
		i++;
	}
	salut[i] = '\0';
	return (salut);
}
