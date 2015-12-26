NAME = fillit

SRCS = main.c

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) -I./includes $(SRCS)
	make -C libft
	gcc $(OBJ) -L libft/ -lft -o $(NAME)

clean:
	/bin/rm -f $(OBJ)
	make -C libft clean

fclean: clean
	/bin/rm -f $(NAME)
	#make -C libft fclean

re: fclean all
