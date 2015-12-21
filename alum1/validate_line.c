#include "header.h"

int		validate_line(char *line)
{
	if (*line == '0')
		return (0);
	while (*line)
	{
		if (*line > '9' || *line < '0')
			return (0);
		line++;
	}
	return (1);
}
