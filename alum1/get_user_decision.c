#include "header.h"

int		get_user_decision(int *array, int *number)
{
	char	*decision;
	int		ok;
	int		decision_as_int;

	ok = 0;
	decision = (char*)malloc(sizeof(char) * 20);
	while (!ok)
	{
		get_next_line(0, &decision);
		if (validate_user_input(decision, array, number))
			ok = 1;
		else
			free(decision);
	}
	decision_as_int = ft_atoi(decision);
	free(decision);
	return (decision_as_int);
}
