/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dscf.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 12:22:25 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 13:16:19 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_d(va_list lList, int *n_chars)
{
	int		temp_int;
	char	*temp_string;
	size_t	i;

	temp_int = va_arg(lList, int);
	temp_string = ft_itoa_base(temp_int, 10);
	i = 0;
	while (i < strlen(temp_string))
	{
		ft_putchar(temp_string[i]);
		(*n_chars)++;
		i++;
	}
}

void	case_s(va_list lList, int *n_chars)
{
	char *temp_string;

	temp_string = va_arg(lList, char*);
	while (*temp_string)
	{
		ft_putchar(*temp_string);
		(*n_chars)++;
		temp_string++;
	}
}

void	case_c(va_list lList, int *n_chars)
{
	char temp_char;

	temp_char = va_arg(lList, int);
	ft_putchar(temp_char);
	*n_chars = *n_chars + 1;
}

void	case_f(va_list lList, int *n_chars)
{
	float	temp_float;
	char	*string;
	int		int_part;
	char	*str_int_part;
	int		float_part;
	char	*str_float_part;

	temp_float = va_arg(lList, double);
	int_part = ft_int_part(temp_float);
	*n_chars = *n_chars + nr_digits(int_part);
	temp_float = temp_float - int_part;
	float_part = ft_float_part(temp_float);
	*n_chars = *n_chars + nr_digits(float_part);
	str_int_part = ft_itoa_base(int_part, 10);
	str_float_part = ft_itoa_base(float_part, 10);
	string = ft_strjoin(str_int_part, ".");
	string = ft_strjoin(string, str_float_part);
	(*n_chars)++;
	ft_putstr(string);
}
