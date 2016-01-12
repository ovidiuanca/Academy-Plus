/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encode_pieces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 03:39:27 by anghergh          #+#    #+#             */
/*   Updated: 2016/01/08 03:39:29 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

t_piece	**encode_pieces(int fd)
{
	int		i;
	char	execute;
	t_piece	**pieces;

	if (!(pieces = ft_memalloc(26 * sizeof(*pieces))))
		err_malloc();
	ft_bzero(pieces, 26 * sizeof(*pieces));
	execute = 1;
	i = 0;
	while (execute)
	{
		pieces[i] = read_chunk(fd, &execute);
		i++;
	}
	return (pieces);
}
