/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:24:33 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 09:53:43 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HEADER_H

#define __HEADER_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
char	*ft_itoa_base(int val, int base);
void	case_d(va_list lList, int *nChars);
void	case_s(va_list lList, int *nChars);
void	case_c(va_list lList, int *nChars);
int		ft_printf(const char *format, ...);

#endif
