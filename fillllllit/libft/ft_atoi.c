/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 02:59:09 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 04:25:34 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int number;
	int negative;

	while (ft_isspace(*str))
		str++;
	negative = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	number = 0;
	while (ft_isdigit(*str))
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	if (negative)
		number *= -1;
	return (number);
}
