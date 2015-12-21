#include "header.h"

int     validate_line(char *line)
{/*
    if (*line == '0')
        return (0);
    while (*line)
    {
        if (*line >= '9' || *line <= '0')
            return (0);
        line++;
    }
    return (1);*/
	int i;

	i = 0;
	if (line[i] == '0')
		return (0);
	i++;
	while (line[i])
	{
		if (line[i] >= '9' || line[i] <= '0')
			return (0);
		i++;
	}
	return (1);
}
