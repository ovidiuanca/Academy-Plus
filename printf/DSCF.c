/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DSCF.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 12:30:55 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 12:58:30 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	case_D(va_list lList, int *n_chars)
{
	long 		temp_long;

	temp_long = va_arg(lList, long);
	ft_putnbr(temp_long);
	*n_chars = *n_chars + 1;
}
