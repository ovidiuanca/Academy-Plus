#include "header.h"

int		validate_user_input(char *str, int *array, int *number)
{
	int ok;
	int integer;

	ok = 1;
	if (ft_strlen(str) != 1)
		ok = 0;
	if (*str != '1' && *str != '2' && *str != '3')
		ok = 0;
	integer = ft_atoi(str);
	if (integer > *(array + (*number - 1)))
		ok = 0;
	if (ok)
		return (1);
	else
	{
		ft_putstr("Error input!\n");
		return (0);
	}
}
