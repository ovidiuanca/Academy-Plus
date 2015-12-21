#include "header.h"

t_board		*l_init_list(void)
{
	t_board	*my_board;

	my_board = malloc(sizeof(t_board));
	my_board->n = 0;
	my_board->next = NULL;
	return (my_board);
}
