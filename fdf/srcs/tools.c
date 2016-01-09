#include "fdf.h"
#include "mlx.h"

void	change_coords(t_point *a, t_point *b)
{
	a->x = a->x * cos(45) - a->y * cos(45);
	a->y = a->z + a->x * sin(45) + a->y * sin(45);
	b->x = b->x * cos(45) - b->y * cos(45);
	b->y = b->z + b->x * sin(45) + b->y * sin(45);
}

double	get_distance(t_point a, t_point b)
{
	double distance;

	distance = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
	return (distance);
}

void	draw_line(t_env *m, t_point a, t_point b)
{
	int 	x;
	int		y;
	double	index;
	double	distance;

	index = 0;
	distance = get_distance(a, b);
	while (index < distance)
	{
		x = a.x + index / distance * (b.x - a.x);
		y = a.y + index / distance * (b.y - a.y);
		mlx_pixel_put(m->mlx, m->screen, x, y, WHITE);
		index++;
	}
}

void	to_right(t_env *m, int i, int j)
{
	t_point p1;
	t_point p2;

	p1.x = 600 + (30 * j);
	p1.y = 100 + (30 * i);
	p1.z = m->matrix[i][j];
	p2.x = 600 + (30 * (j + 1));
	p2.y = 100 + (30 * i);
	p2.z = m->matrix[i][j + 1];
	change_coords(&p1, &p2);
	draw_line(m, p1, p2);
}

void	to_down(t_env *m, int i, int j)
{
	t_point p1;
	t_point p2;

	p1.x = 600 + (30 * j);
	p1.y = 100 + (30 * i);
	p1.z = m->matrix[i][j];
	p2.x = 600 + (30 * j);
	p2.y = 100 + (30 * (i + 1));
	p2.z = m->matrix[i + 1][j];
	change_coords(&p1, &p2);
	draw_line(m, p1, p2);
}
