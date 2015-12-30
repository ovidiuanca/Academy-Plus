NAME = fdf

SRCS = srcs/*.c \
	   libft/*.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I libft/ -I get_next_line/ -I includes/ $(SRCS)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm/ -f $(NAME)

re:
	fclean all
