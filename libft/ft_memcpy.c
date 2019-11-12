/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:28:27 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/12 19:42:11 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    char *str;
    char *zoo;
    
    str = (char*)src;
    zoo =(char*)dst;
    i = 0;
    if (str == NULL && zoo == NULL)
      return (NULL);
    while (i < n)
    {
        zoo[i] = str[i];
        i++;
    }
    return((void*)zoo);
} 
