#include "header.h"

t_board		*read_console(int *number)
{
	t_board	*my_board;
	t_board *begin;
	char	*line;
	int		valid;
	int		line_as_int;

	my_board = l_init_list();
	begin = my_board;
	ft_putstr("Insert the map:\n");
	while (get_next_line(0, &line) > 0 && ft_strcmp(line, "") != 0)
	{
		if (validate_line(line))
		{
			*number += 1;
			line_as_int = ft_atoi(line);
			l_add_node(my_board, line_as_int);
			my_board = my_board->next;
		}
		else
			ft_putstr("Incorrect input. Try again!\n");
	}
	return (begin);
}
