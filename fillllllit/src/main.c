/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 18:21:27 by anghergh          #+#    #+#             */
/*   Updated: 2015/12/24 07:25:43 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>
#include <stdio.h>

int	main(int ac, char **argv)
{
	int fd;

	if (ac != 2)
		usage();
	if (!(fd = open(argv[1], O_RDONLY)))
		err_opening();
	bootstrap(encode_pieces(fd));
	return (0);
}
