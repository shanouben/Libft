/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 21:45:35 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/19 22:31:21 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count(int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		n = n * (-1);
		c++;
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int	count2;
	char	*t;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	count2 = count(n);
	if (!(t = (char *)malloc(sizeof(char) * (count2 + 1))))
		return (NULL);
	t[count2] = '\0';
	if (n < 0)
	{
		t[0] = '-';
		n = n * (-1);
	}
	while (n > 0)
	{
		count2--;
		t[count2] = n % 10 + 48;
		n = n / 10;
	}
	return (t);
}
