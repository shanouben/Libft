/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc************.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:52:30 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/12 18:03:37 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t nmemb,size_t size )
{
    char *t;
    int i;
    i = 0;
    if (nmemb == 0 || size == 0)
        return (NULL);
    if (!(t = malloc(sizeof(char) *(size + 1))))
        return (0);
    while (t[i])
        
}

int main()
{
    printf("caca = %d\n", ft_calloc(2,3));
    printf("avant calloc =%d\n" , calloc(2,3));
    return (0);
}