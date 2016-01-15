/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 15:39:05 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 16:21:23 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char g_base_val[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'a', 'b', 'c', 'd', 'e', 'f'};

int g_bytes_printed;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_ascii(const void *addr, int size)
{
	int		i;
	char	byte;

	i = 0;
	while (i < size)
	{
		byte = *((char*)addr + i);
		if (byte > 31 && byte < 127)
			ft_putchar(byte);
		else
			ft_putchar('.');
		i++;
	}
}

void	print_byte(unsigned char byte)
{
	int number;
	int first;

	g_bytes_printed++;
	number = byte;
	first = number % 16;
	number /= 16;
	ft_putchar(g_base_val[number % 16]);
	ft_putchar(g_base_val[first]);
	if (g_bytes_printed % 2 == 0)
		ft_putchar(' ');
}

void	print_spaces(int i)
{
	while (i % 16 != 0)
	{
		g_bytes_printed++;
		write(1, "  ", 2);
		i++;
		if (g_bytes_printed % 2 == 0)
			ft_putchar(' ');
	}
}

void	ft_print_memory(const void *addr, size_t size)
{
	int i;

	i = 0;
	while (i < (int)size)
	{
		print_byte(*((char*)addr + i));
		if (i % 16 == 15)
		{
			print_ascii(addr + i - 15, 16);
			ft_putchar('\n');
		}
		i++;
	}
	if (i % 16 != 0)
	{
		print_spaces(i);
		print_ascii(addr + i - (i % 16), i % 16);
		ft_putchar('\n');
	}
}
