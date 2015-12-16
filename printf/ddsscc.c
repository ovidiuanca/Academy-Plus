/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ddsscc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 12:22:25 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 13:16:19 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_dd(va_list llist, int *n_chars)
{
	long	temp_long;
	char	*temp_string;
	size_t	i;

	temp_long = va_arg(llist, long);
	temp_string = ft_ltoa_base(temp_long, 10);
	i = 0;
	while (i < ft_strlen(temp_string))
	{
		ft_putchar(temp_string[i]);
		(*n_chars)++;
		i++;
	}
}
