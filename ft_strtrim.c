/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:46:50 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/21 18:44:25 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		verif(char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (verif(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	if (j != 0)
		while (verif(s1[j - 1], set) == 1 && j != i)
			j--;
	return (t = ft_substr(s1, i, (j - i)));
}
