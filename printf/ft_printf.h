/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 09:24:33 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 13:19:11 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINTF_H

#define __FT_PRINTF_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(long number);
char	*ft_itoa_base(long val, int base);
void	case_d(va_list lList, int *nChars);
void	case_s(va_list lList, int *nChars);
void	case_c(va_list lList, int *nChars);
void	case_f(va_list lList, int *nChars);
void	case_D(va_list lList, int *nChars);
int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *s);
int		ft_int_part(float number);
int		ft_float_part(float number);
char	*ft_strjoin(char const *s1, char const *s2);
int		nr_digits(int number);

#endif
