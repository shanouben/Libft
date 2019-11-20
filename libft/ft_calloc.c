/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:52:30 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/19 17:13:03 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*t;

	if (size == 0 && n == 0)
	{
		size = 1;
		n = 1;
	}
	if (!(t = malloc(n * size)))
		return (NULL);
	ft_bzero(t, size * n);
	return (t);
}
