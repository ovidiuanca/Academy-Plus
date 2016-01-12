/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 18:52:31 by anghergh          #+#    #+#             */
/*   Updated: 2016/01/08 17:35:58 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	s_queue
{
	char	data[64];
	int		q_begin;
	int		q_end;
}				t_queue;

typedef struct	s_piece
{
	char	x;
	char	y;
}				t_piece;

typedef struct	s_tetris
{
	t_piece	*piece;
	char	id;
}				t_tetris;

typedef struct	s_board
{
	char	**elm;
	int		size;
}				t_board;

extern int		g_bestsol;

t_piece			*read_chunk(int fd, char *execute);
t_piece			**encode_pieces(int fd);
int				read_line(int fd, char **line);
int				lee_fill(char *line, t_piece *piece);
void			usage(void);
void			err_opening(void);
void			err_reading(void);
void			err_malloc(void);
char			**bootstrap(t_piece **pieces);
void			backtrack(t_piece **pieces, t_board board, int depth);

#endif
