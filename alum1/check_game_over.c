#include "header.h"

int		check_game_over(int *array)
{
	if (*(array + 0) == 0)
		return (1);
	else
		return (0);
}
