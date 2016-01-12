/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 09:31:46 by anghergh          #+#    #+#             */
/*   Updated: 2016/01/08 18:25:54 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int			checkpos(t_board board, t_piece *piece, t_piece pos)
{
	int k;
	int final;

	final = board.size;
	k = -1;
	while (++k < 4)
	{
		if (piece[k].x + pos.x < 0 || piece[k].y + pos.y < 0)
		{
			return (-1);
		}
		if (piece[k].x + pos.x < board.size && piece[k].y + pos.y < board.size)
			if (board.elm[pos.y + piece[k].y][pos.x + piece[k].x] != 0)
				return (-1);
		if (piece[k].x + pos.x + 1 > final)
			final = piece[k].x + pos.x + 1;
		if (piece[k].y + pos.y + 1 > final)
			final = piece[k].y + pos.y + 1;
	}
	if (final > g_bestsol)
		return (-1);
	return (final);
}

void		init(char **matrix, int size)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < size)
	{
		if (matrix[i] == NULL)
			err_malloc();
		while (++j < size)
			matrix[i][j] = 0;
		j = 0;
	}
}

t_board		insert_piece(t_board board, t_tetris tts, t_piece pos, int size)
{
	int		i;
	int		j;
	t_board	new;

	new.size = size;
	if ((new.elm = malloc(sizeof(char*) * size)) == NULL)
		err_malloc();
	i = -1;
	while (++i < size)
		new.elm[i] = malloc(sizeof(char) * size);
	i = -1;
	init(new.elm, size);
	while (++i < board.size)
	{
		j = -1;
		while (++j < board.size)
			new.elm[i][j] = board.elm[i][j];
	}
	i = -1;
	while (++i < 4)
		new.elm[pos.y + tts.piece[i].y][pos.x + tts.piece[i].x] = tts.id;
	return (new);
}

void		gen_new(t_board board, t_piece **pieces, t_piece *pos, int depth)
{
	int			size;
	t_tetris	tts;
	t_board		new;

	tts.piece = pieces[depth];
	tts.id = 'A' + depth;
	while (pos->y < g_bestsol)
	{
		while (pos->x < g_bestsol)
		{
			if ((size = checkpos(board, pieces[depth], *pos)) != -1)
			{
				new = insert_piece(board, tts, *pos, size);
				backtrack(pieces, new, depth + 1);
				free(new.elm);
			}
			pos->x++;
		}
		pos->y++;
		pos->x = 0;
	}
}

void		backtrack(t_piece **pieces, t_board board, int depth)
{
	t_piece pos;
	int		i;
	int		j;

	pos.x = 0;
	pos.y = 0;
	if (pieces[depth] == NULL)
	{
		i = -1;
		while (++i < board.size)
		{
			j = -1;
			while (++j < board.size)
			{
				if (board.elm[i][j] == 0)
					ft_putchar('.');
				else
					ft_putchar(board.elm[i][j]);
			}
			ft_putchar('\n');
		}
		exit(1);
	}
	gen_new(board, pieces, &pos, depth);
}
