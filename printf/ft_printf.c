/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/20 23:49:45 by ocota             #+#    #+#             */
/*   Updated: 2015/11/21 02:15:04 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		nr_digits(int number)
{
	int digits;

	digits = 0;
	while (number)
	{
		digits++;
		number /= 10;
	}
}

char*	ft_itoa_base(int val, int base)
{
	static char buf[32] = {0};
	int 		i = 30;
	int 		sign = 1;

	if (val < 0)
	{
		sign = -1;
		val = val * sign;
	}
	while (val && i)
	{
		buf[i] = "0123456789abcdef"[val % base];
		--i;
		val /= base;
	}
	if (sign < 0)
	{
		buf[i] = '-';
		--i;
	}
	return &buf[i + 1];
}

int		format_and_print(const char *pcFmt, va_list lList)
{
	//Holds the number of characters printed, 0 on error
	int nChars = 0;

	while(*pcFmt != '\0')
	{
		if(*pcFmt == '%')
		{
			pcFmt++;
			/*
			int		iTemp = 0;
			char	cTemp = 0;
			char	*acTemp;
			char	*pcTemp = NULL;

			acTemp = (char*)malloc(sizeof(acTemp) * 1000);*/
			if (*pcFmt == 'd')
				case_d(lList, &nChars);
			/*	
			switch (*pcFmt)
			{
				case 'd':
					iTemp = va_arg(lList, int);
					acTemp = ft_itoa_base(iTemp, 10); 
					int i;
					for(i = 0; i < strlen(acTemp); i++)
					{
						ft_putchar(acTemp[i]);
						nChars++;
					}
					break;
				case 's':
					pcTemp = va_arg(lList, char*);

					while(*pcTemp != '\0')
					{
						ft_putchar(*pcTemp);
						nChars++;
						pcTemp++;
					}
					break;
				case 'c':
					cTemp = va_arg(lList, int);  
					ft_putchar(cTemp);
					nChars++;
					break;
				default:
					break;
			}
			*/
			pcFmt++;
		}
		else 
			// print the char to console
		{
			ft_putchar(*pcFmt);
			pcFmt++;
			nChars++;
		}
	}
	return nChars;
}

int		ft_printf(const char *format, ...)
{
	if(!format)
	{
		return 0;
	}
	va_list lList;
	
	va_start(lList, format);
	return(format_and_print(format, lList));
}
