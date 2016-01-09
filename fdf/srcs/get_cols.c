#include "libft.h"

void	get_cols(char **matrix, int *cols)
{
	int		i;
	char	*line;

	line = ft_strdup(matrix[0]);
	i = 0;
	*cols = 1;
	while (line[i])
	{
		if (line[i] == ' ' && line[i - 1] != ' ')
			(*cols)++;
		i++;
	}
}
