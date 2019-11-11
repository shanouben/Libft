/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:32:10 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/11 12:07:23 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strdup(const char *str)
{
	int o;
	int i;
	char*salut;

	i = 0;
	o = ft_strlen(str);
	if (!(salut = malloc(sizeof(char) * (o + 1))))
		return (0);
	while (str[i])
	{
		salut[i] = str[i];
		i++;
	}
	salut[i] = '\0';
	return (salut);
}
