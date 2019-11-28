/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:50:36 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/28 14:50:31 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		nbrdemot(const char *s, char c)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			res++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (res);
}

void	*ft_free(char **t)
{
	int i;

	i = 0;
	while (t[i])
	{
		free(t[i]);
		i++;
	}
	free(t);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;
	int		temp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s || !(s1 = (char **)malloc(sizeof(char *) * (nbrdemot(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			temp = i;
			while (s[i] && s[i] != c)
				i++;
			if (!(s1[j++] = ft_strndup(s + temp, i - temp)))
				return (ft_free(s1));
		}
	}
	s1[nbrdemot(s, c)] = NULL;
	return (s1);
}
