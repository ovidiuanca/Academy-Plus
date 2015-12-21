#include "header.h"

int		*move_to_array(t_board *my_board, int *lines)
{
	int		*array;
	int		*begin;

	my_board = my_board->next;
	array = (int*)malloc(sizeof(int) * (*lines + 1));
	begin = array;
	while (my_board)
	{
		*array = my_board->n;
		array++;
		my_board = my_board->next;
	}
	*array = -1;
	return (begin);
}
