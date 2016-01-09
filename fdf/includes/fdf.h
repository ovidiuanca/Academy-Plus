#ifndef __FDF_H
# define __FDF_H

# include <math.h>
# include <fcntl.h>
# include <stdio.h>

# define WHITE 0xFFFFFF
# define RED 0xFF00FF
# define WIDTH 1440
# define HEIGHT	900

typedef struct	s_env
{
	int			**matrix;
	int			cols;
	int			rows;
	void		*mlx;
	void		*screen;
}				t_env;

typedef struct	s_point
{
	int 		x;
	int 		y;
	int			z;
}				t_point;

char			**read_file(char *filename, int *rows);
void			get_cols(char **file_matrix, int *cols);
int				**move_matrix_to_int(char  **file_matrix, int cols, int rows);
void			to_right(t_env *m, int i, int j);
void			to_down(t_env *m, int i, int j);

#endif
