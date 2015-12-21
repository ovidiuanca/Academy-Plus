/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:44:57 by ocota             #+#    #+#             */
/*   Updated: 2015/11/14 05:14:06 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nr_digits(int n)
{
	int digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digits++;
	while (n)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		digits;
	int		i;
	long	copy;

	copy = n;
	digits = nr_digits(copy);
	result = (char*)malloc(sizeof(char) * (digits + 2));
	i = 0;
	if (copy < 0)
	{
		result[i++] = '-';
		copy = copy * (-1);
	}
	result[digits--] = '\0';
	result[digits--] = copy % 10 + 48;
	copy /= 10;
	while (copy)
	{
		result[digits--] = copy % 10 + 48;
		copy /= 10;
	}
	return (result);
}
