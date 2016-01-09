#include "fdf.h"
#include "get_next_line.h"

char	**read_file(char *filename, int	*rows)
{
	char	*line;
	char	**matrix;
	int		fd;
	int		i;
	int		lines;

	lines = 0;
	fd = open(filename, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		lines++;
	matrix = (char**)malloc(sizeof(char*) * lines + 1);
	close(fd);
	fd = open(filename, O_RDONLY);
	i = 0;
	while (i < lines)
	{
		matrix[i] = (char*)malloc(sizeof(char) * 50);
		get_next_line(fd, &(matrix[i]));
		i++;
	}
	matrix[i] = NULL;
	*rows = lines;
	return (matrix);
}
