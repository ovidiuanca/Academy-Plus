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

void    percent(char **format, *n_chars, va_list lList);
{
    char    *descriptor;
    int     lenght;

    if (is_descriptor(*format))
        lenght = calc_desc_len(*format);
}

int		format_and_print(const char *format, va_list lList)
{
	int n_chars = 0;

	while(*format != '\0')
	{
		if(*format == '%')
            percent(&format, &n_chars, lList);
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
		return 0;
	va_list lList;
	
	va_start(lList, format);
	return (format_and_print(format, lList));
}
