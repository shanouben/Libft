# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 17:38:04 by karibenn          #+#    #+#              #
#    Updated: 2019/11/23 18:04:12 by karibenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

FLAGS = -Wall -Wextra -Werror -g3

SRCS = ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memcpy.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strdup.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strncmp.c\
	ft_strrchr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_memccpy.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_calloc.c\
	ft_memmove.c\
	ft_strnstr.c\
	ft_strlcat.c\
	ft_itoa.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strcpy.c\
	ft_strcat.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_strtrim.c\
	ft_strmapi.c\
	ft_split.c\
	ft_strndup.c\

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I .
	ar rc $(NAME) $(SRCS:.c=.o) $^
	ranlib $(NAME)

bonus:
	gcc $(FLAGS) -c $(SRCS) $(BONUS) -I .
	ar rc $(NAME) $(BONUS:.c=.o) $(SRCS:.c=.o) $^
	ranlib $(NAME)

clean:
	rm -rf $(SRCS:.c=.o)

clean_b:
	rm -rf $(BONUS:.c=.o)

fclean: clean clean_b
	rm -rf $(NAME)
re: fclean all
