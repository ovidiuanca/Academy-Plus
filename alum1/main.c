#include "header.h"

int		main(void)
{
	t_board *my_board;
	int		*array;
	int		*lines;

	lines = (int*)malloc(sizeof(int));
	*lines = 0;
	my_board = read_file(lines);
	array = move_to_array(my_board, lines);
	start_game(array, lines);
	return (0);
}
