#include "header.h"

void	user_turn(int *array, int *number, int *user_decision)
{
	print_user_turn(array, number);
	*user_decision = get_user_decision(array, number);
	user_compute_map(array, number, *user_decision);
	print_board(array, number);
}

void	cpu_turn(int *array, int *number)
{
	print_cpu_turn();
	cpu_easy(array, number);
}

void	start_game(int *array, int *number)
{
	int	user_decision;
	int user_won;
	int	cpu_won;

	print_new_lines();
	user_won = 0;
	cpu_won = 0;
	while (!user_won && !cpu_won)
	{
		user_turn(array, number, &user_decision);
		if (!check_game_over(array))
		{
			cpu_turn(array, number);
			if (check_game_over(array))
				user_won = 1;
		}
		else if (!cpu_won)
			cpu_won = 1;
	}
	if (user_won)
		print_user_won();
	else
		print_cpu_won();
}
