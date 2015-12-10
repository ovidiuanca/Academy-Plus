/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:25:47 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 09:39:34 by ocota            ###   ########.fr       */
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
		*n_chars = *n_chars + 1;
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
		*n_chars = *n_chars + 1;
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
