#include "header.h"

int		main(void)
{
	t_board *my_board;
	int		*array;
	int		lines;
	char	*decision;
	int		valid;

	valid = 0;
	while (!valid)
	{
		ft_putstr("Press 1 to read from file or 0 to read from the console:");
		get_next_line(0, &decision);
		if (validate_decision(decision))
			valid = 1;
	}
	lines = 0;
	if (*decision == '1')
		my_board = read_file(&lines);
	else
		my_board = read_console(&lines);
	array = move_to_array(my_board, &lines);
	start_game(array, &lines);
	return (0);
}
