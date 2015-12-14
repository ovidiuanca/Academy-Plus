/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 10:35:46 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 11:04:31 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_int_part(float number)
{
	int result;

	result = (int)number;
	return (result);
}

int		ft_float_part(float number)
{
	int i;

	i = 0;
	while(i < 6)
	{
		number *= 10;
		i++;
	}
	return (number);
}
