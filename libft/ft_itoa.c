/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:44:57 by ocota             #+#    #+#             */
/*   Updated: 2015/11/14 02:27:19 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nr_digits(int n)
{
	int digits;

	digits = 0;
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
	int 	i;
	long	copy;

	copy = n;
	digits = nr_digits(copy);
	result = (char*)malloc(sizeof(char) * (digits + 2));
	i = 0;
	if (copy == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (copy < 0)
	{
		result[0] = '-';
		copy = copy * (-1);
		i++;
	}
	digits += i;
	result[digits] = '\0';
	digits--;
	while (copy)
	{
		result[digits] = copy % 10 + 48;
		digits--;
		copy /= 10;
	}
	return (result);
}
