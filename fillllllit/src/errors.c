/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 20:57:38 by anghergh          #+#    #+#             */
/*   Updated: 2016/01/08 03:39:43 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

void	usage(void)
{
	ft_putstr_fd("usage: fillit input_file\n", 2);
	exit(0);
}

void	err_opening(void)
{
	ft_putstr_fd("error opening file\n", 2);
	exit(-1);
}

void	err_reading(void)
{
	ft_putstr_fd("error\n", 2);
	exit(-1);
}

void	err_malloc(void)
{
	ft_putstr_fd("error allocating memory (malloc: NULL)", 2);
	exit(-1);
}
