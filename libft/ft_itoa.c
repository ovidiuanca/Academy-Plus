/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:44:57 by ocota             #+#    #+#             */
/*   Updated: 2015/11/07 19:50:17 by ocota            ###   ########.fr       */
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

	digits = nr_digits(n);
	result = (char*)malloc(sizeof(char) * (digits + 2));
	i = 0;
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		result[0] = '-';
		n = n * (-1);
		i++;
	}
	digits += i;
	result[digits] = '\0';
	digits--;
	while (n)
	{
		result[digits] = n % 10 + 48;
		digits--;
		n /= 10;
	}
	return (result);
}
