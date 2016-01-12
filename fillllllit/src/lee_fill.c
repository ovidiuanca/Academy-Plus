/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lee_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 15:14:06 by anghergh          #+#    #+#             */
/*   Updated: 2016/01/07 10:21:37 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <stdio.h>

int		g_moves[] = {1, 4, -4, -1};
int		g_piece;

void	encode(t_piece *piece, t_queue *queue, int check_pos)
{
	int xorig;
	int yorig;
	int x;
	int y;

	yorig = queue->data[0] / 4;
	xorig = queue->data[0] % 4;
	y = check_pos / 4;
	x = check_pos % 4;
	piece[g_piece].x = x - xorig;
	piece[g_piece].y = y - yorig;
}

void	parse(t_queue *queue, int *filled_size, char *line, t_piece *piece)
{
	int	i;
	int	check_pos;

	g_piece = 1;
	while (queue->q_begin != queue->q_end)
	{
		i = -1;
		while (++i < 4)
		{
			check_pos = queue->data[queue->q_begin] + g_moves[i];
			if (!(check_pos < 0 || check_pos > 15))
				if (line[check_pos] == '#')
				{
					encode(piece, queue, check_pos);
					queue->data[queue->q_end] = check_pos;
					queue->q_end++;
					(*filled_size)++;
					line[check_pos] = 'X';
					g_piece++;
				}
		}
		queue->q_begin++;
	}
}

int		lee_fill(char *line, t_piece *piece)
{
	t_queue	queue;
	int		filled_size;

	filled_size = 0;
	ft_bzero(&queue, sizeof(queue));
	while (line[(int)queue.data[0]] != '#')
		queue.data[0]++;
	line[(int)queue.data[0]] = 'X';
	queue.q_end = 1;
	parse(&queue, &filled_size, line, piece);
	if (filled_size != 3)
		return (0);
	return (1);
}
