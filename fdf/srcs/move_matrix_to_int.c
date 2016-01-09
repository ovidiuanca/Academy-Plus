#include "fdf.h"
#include "libft.h"

void	process_line(char **char_matrix, int row, int **int_matrix)
{
	char	*line;
	int		col;
	int		i;

	i = 0;
	line = ft_strdup(char_matrix[row]);
	col = 0;
	while (line[i])
	{
		int_matrix[row][col] = ft_atoi(line + i);
		col++;
		while (line[i] != ' ' && line[i])
			i++;
		while (line[i] == ' ')
			i++;	
	}
}

int		**move_matrix_to_int(char **char_matrix, int cols, int rows)
{
	int		**int_matrix;
	int		i;

	int_matrix = (int**)malloc(sizeof(int*) * rows);
	i = 0;
	while (i < rows)
	{
		*(int_matrix + i) = (int*)malloc(sizeof(int) * cols);
		process_line(char_matrix, i, int_matrix);
		i++;
	}
	return (int_matrix);
}
