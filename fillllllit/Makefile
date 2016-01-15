# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anghergh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/22 17:28:16 by anghergh          #+#    #+#              #
#    Updated: 2016/01/07 22:01:25 by anghergh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = 	src/main.c\
	src/read_chunk.c\
	src/read_line.c\
	src/lee_fill.c\
	src/errors.c\
	src/encode_pieces.c\
	src/backtrack.c\
	src/bootstrap.c

OBJ = 	main.o\
	read_chunk.o\
	read_line.o\
	lee_fill.o\
	errors.o\
	encode_pieces.o\
	backtrack.o\
	bootstrap.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

INC = includes\

$(NAME): 
	@echo "\033[32mcompiling libft\033[0m"
	@make -C libft
	@echo "\033[32mmaking object files for $(NAME)\033[0m"
	@gcc $(FLAGS) -I $(INC) -c $(SRC)
	@echo "\033[32mlinking $(NAME)\033[0m"
	@gcc $(OBJ) -L libft -lft -o $(NAME)

clean:
	@echo "\033[33mcleaning libft\033[0m"
	@make -C libft clean
	@echo "\033[33mcleaning $(NAME)\033[0m"
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[36mremoving libft binary\033[0m"
	@make -C libft fclean
	@echo "\033[36mremoving $(NAME) binary\033[m"
	@rm -f $(NAME)

rebuild:
	@echo "\033[33mcleaning $(NAME)\033[0m"
	@rm -f $(OBJ)
	@echo "\033[36mremoving $(NAME) binary\033[m"
	@rm -f $(NAME)
	@echo "\033[32mmaking object files for $(NAME)\033[0m"
	@gcc $(FLAGS) -I $(INC) -c $(SRC)
	@echo "\033[32mlinking $(NAME)\033[0m"
	@gcc $(OBJ) -L libft -lft -o $(NAME)

re: fclean all
