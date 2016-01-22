NAME = push_swap

SRCS = srcs/*.c

OBJ = *.o

LIBFT = libft/

all: $(NAME)

$(NAME):
	make -C libft/
	gcc -Wall -Wextra -Werror -I includes/ -I libft/ -L $(LIBFT) -lft $(SRCS)
	mv a.out push_swap

clean:
	make -C $(LIBFT) clean

fclean: clean
	make -C $(LIBFT) fclean
	/bin/rm -f $(NAME)

re: fclean all
