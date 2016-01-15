/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 03:35:37 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 16:50:03 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		number_size(int number)
{
	int size;

	size = 0;
	if (number < 0)
		size = 1;
	while (number)
	{
		number /= 10;
		size++;
	}
	return (size);
}

static void		parse_copy(char **number, int n)
{
	while (n)
	{
		**number = n % 10 + '0';
		n /= 10;
		(*number)--;
	}
}

char			*ft_itoa(int n)
{
	int		size;
	char	*number;
	int		negative;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	negative = 0;
	size = number_size(n);
	number = ft_strnew(size);
	if (n < 0)
	{
		negative = 1;
		*number = '-';
		n *= -1;
	}
	number += size - 1;
	parse_copy(&number, n);
	if (negative)
		return (number);
	return (number + 1);
}
