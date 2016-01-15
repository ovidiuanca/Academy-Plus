NAME = fdf

SRCS = srcs/*.c \
	   libft/*.c \
	   get_next_line/get_next_line.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -g -Wall -Wextra -Werror -I includes/ -I get_next_line/ -I mlx/ -L mlx/ -L libft/ -lft -lmlx -framework OpenGL -framework AppKit $(SRCS)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm/ -f $(NAME)

re:
	fclean $(NAME)
