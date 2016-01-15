#include "mlx.h"
#include "fdf.h"

int		key_hook(int codekey)
{
	if (codekey == 53)
		exit(0);
	return (0);
}

int		draw(t_env *m)
{
	int i;
	int j;

	i = 0;
	while (i < m->rows)
	{
		j = 0;
		while (j < m->cols)
		{
			if (i == m->rows - 1 && (m->cols - 1) != j)
				to_right(m, i, j);
			else if (j == m->cols - 1 && (m->rows - 1) != i)
				to_down(m, i, j);
			else if ((m->rows - 1) != i && (m->cols - 1) != j)
			{
				to_right(m, i, j);
				to_down(m, i, j);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	print_matrix(int **matrix, int cols, int rows)
{
	int i;
	int j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			printf("%d ", matrix[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}

int		main(int argc, char **argv)
{
	t_env	m;
	char	**file_matrix;

	if (argc != 2)
		return (0);
	file_matrix = read_file(argv[1], &m.rows);
	get_cols(file_matrix, &m.cols);
	m.matrix = move_matrix_to_int(file_matrix, m.cols, m.rows);
	print_matrix(m.matrix, m.cols, m.rows);
	m.mlx = mlx_init();
	m.screen = mlx_new_window(m.mlx, WIDTH, HEIGHT, "fdf");
	mlx_key_hook(m.screen, key_hook, &m);
	mlx_expose_hook(m.screen, draw, &m);
	mlx_loop(m.mlx);
	return (0);
}
