/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:28:27 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/11 17:37:50 by karibenn         ###   ########.fr       */
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
    while (i < n)
    {
        zoo[i] = str[i];
        i++;
    }
    return((void*)zoo);
} 

#include <stdio.h>



#include <stdio.h>
#include <string.h>
int main ()
{
  const char src[] = "bonjour";
  char dest[] = "01" ;
  printf("Before memcpy dest = %s\n", dest);
ft_memcpy(dest,  src, 15);
  printf("After memcpy dest = %s\n", dest);
  return(0);
}