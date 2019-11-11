# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karibenn <karibenn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 17:38:04 by karibenn          #+#    #+#              #
#    Updated: 2019/11/11 18:34:27 by karibenn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
SRCS = ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c	\
		ft_memset.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strrchr.c\
		ft_tolower.c\
		ft_toupper.c\
SRCDIR    = ./srcs/
INCDIR    = ./includes/
CC        = gcc
FLAGS    = -Wall -Wextra -Werror
OBJ= $(addprefix $(SRCDIR), $(SRCS:.c=.o)) $(SRCDIR)%.o:    $(SRCDIR)%.c  $(CC) 
	$(FLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME):	$(OBJ)
		ar rcs $(NAME) $(OBJ)
all:		$(NAME)
clean:
		rm -f $(OBJ)
fclean:		clean
		rm -f $(NAME)
re:		fclean all
.PHONY:		all clean fclean re
