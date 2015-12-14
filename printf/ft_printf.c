/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/20 23:49:45 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 13:18:31 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		nr_digits(int number)
{
	int digits;

	digits = 0;
	while (number)
	{
		digits++;
		number /= 10;
	}
	return (digits);
}

int		format_and_print(const char *format, va_list lList)
{
	int n_chars = 0;

	while(*format != '\0')
	{
		if(*format == '%')
		{
			format++;
			if (*format == 'd')
				case_d(lList, &n_chars);
			else if (*format == 's')
				case_s(lList, &n_chars);
			else if (*format == 'c')
				case_c(lList, &n_chars);
			else if (*format == 'f')
				case_f(lList, &n_chars);
			else if (*format == 'D')
				case_D(lList, &n_chars);
			format++;
		}
		else 
		{
			ft_putchar(*format);
			format++;
			n_chars++;
		}
	}
	return (n_chars);
}

int		ft_printf(const char *format, ...)
{
	if(!format)
	{
		return 0;
	}
	va_list lList;
	
	va_start(lList, format);
	return (format_and_print(format, lList));
}
