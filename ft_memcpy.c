/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:28:27 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/11 15:46:10 by karibenn         ###   ########.fr       */
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
    while (i < n && str[i])
    {
        zoo[i] = str[i];
        i++;
    }
    zoo[i] = '\0';
    return((void*)zoo);
} 

#include <stdio.h>


int main(int ac, char **av)
{
    (void)ac;
    printf("av = %s\n", av[2]);
printf("%s\n%s\n",av[1], av[3]);
    ft_memcpy(av[1], av[2], 10);
    memcpy(av[3], av[2], 10);
    printf("av = %s\n", av[2]);
    printf("%s\n%s\n",av[1], av[3]);    
    return (0);
}