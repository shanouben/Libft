/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:48:51 by karibenn          #+#    #+#             */
/*   Updated: 2019/11/12 18:05:47 by karibenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

int		ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char		*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
char		*ft_strdup(const char *str);
char		*ft_strchr(const char *s, int c);
void		*ft_memset(void *b, int c, size_t len);
void    	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
//void	*ft_calloc(size_t nmemb, size_t size);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);


#endif
