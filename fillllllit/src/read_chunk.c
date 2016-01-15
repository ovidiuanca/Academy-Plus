/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 21:06:07 by anghergh          #+#    #+#             */
/*   Updated: 2016/01/08 03:40:48 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

t_piece	*read_chunk(int fd, char *execute)
{
	char		*line;
	char		buff;
	t_piece		*piece;
	static int	count;

	if (!(piece = ft_memalloc(4 * sizeof(t_piece))))
		err_malloc();
	ft_bzero(piece, sizeof(t_piece));
	if (read_line(fd, &line) == 0)
		return (0);
	if (read(fd, &buff, 1) != 1)
		*execute = 0;
	else if (buff != '\n')
		err_reading();
	if (lee_fill(line, piece) == 0)
		err_reading();
	free(line);
	line = NULL;
	count++;
	if (count > 26)
		err_reading();
	return (piece);
}
