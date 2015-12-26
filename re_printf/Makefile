NAME = libftprintf.a

SRCS = srcs/*.c \
	   libft/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I libft/ -I includes/ -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re:
	fclean all
