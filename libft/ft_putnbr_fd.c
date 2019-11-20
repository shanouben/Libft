/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 21:03:02 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/20 21:26:13 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long res;

	res = n;
	if (res < 0)
	{
		res = res * (-1);
		ft_putchar_fd('-', fd);
	}
	if (res > 9)
	{
		ft_putnbr_fd(res / 10, fd);
		ft_putchar_fd(res % 10 + 48, fd);
	}
	if (res <= 9)
		ft_putchar_fd(res + 48, fd);
}
