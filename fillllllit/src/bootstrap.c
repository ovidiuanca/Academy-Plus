/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bootstrap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 09:31:55 by anghergh          #+#    #+#             */
/*   Updated: 2016/01/08 17:49:40 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int g_bestsol = 2;
t_board g_best_board;
char **g_start;

char	**bootstrap(t_piece **pieces)
{
	t_board board;

	g_best_board.size = 9999;
	g_start = malloc(sizeof(char*) * 2);
	g_start[0] = malloc(sizeof(char) * 2);
	g_start[1] = malloc(sizeof(char) * 2);
	board.elm = g_start;
	board.size = 2;
	while (g_best_board.size == 9999)
	{
		backtrack(pieces, board, 0);
		g_bestsol++;
	}
	return (NULL);
}
