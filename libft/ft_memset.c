/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:21:55 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/11 12:00:09 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*t;

	i = 0;
	t = (char*)b;
	while (i < len)
	{
		t[i] = c;
		i++;
	}
	return (t);
}
