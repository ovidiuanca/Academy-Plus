#include "header.h"

void	l_add_node(t_board *my_board, int elem)
{
	t_board	*new_node;

	new_node = (t_board*)malloc(sizeof(t_board));
	new_node->n = elem;
	new_node->next = NULL;
	my_board->next = new_node;
}
