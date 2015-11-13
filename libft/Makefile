# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocota <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/13 11:37:21 by ocota             #+#    #+#              #
#    Updated: 2015/11/13 12:09:31 by ocota            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putendl.c ft_strnstr.c \
	   ft_strrchr.c ft_atoi.c \
	   ft_putnbr.c ft_bzero.c ft_memalloc.c \
	   ft_strstr.c ft_isalnum.c ft_memccpy.c \
	   ft_putstr.c ft_isalpha.c ft_memchr.c \
	   ft_strlen.c ft_isascii.c ft_memcmp.c ft_strdup.c\
	   ft_strcat.c ft_tolower.c ft_isdigit.c ft_memcpy.c \
	   ft_strchr.c ft_toupper.c ft_isprint.c ft_memdel.c \
	   ft_strncat.c ft_itoa.c ft_strcmp.c \
	   ft_memset.c ft_strcpy.c ft_strncpy.c ft_strncmp.c \
	   ft_putchar.c  ft_memmove.c ft_strlcat.c\

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
