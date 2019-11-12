# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 17:38:04 by karibenn          #+#    #+#              #
#    Updated: 2019/11/12 19:48:35 by karibenn         ###   ########.fr        #
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
