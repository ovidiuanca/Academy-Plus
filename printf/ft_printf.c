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

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PRINTCHAR(c) putchar(c)
#define MAXLEN 256



//Write a printf function which simulates printf() in C.

char*	itoa(int val, int base){

	static char buf[32] = {0};

	int i = 30;

	for(; val && i ; --i, val /= base)

		buf[i] = "0123456789abcdef"[val % base];

	return &buf[i+1];

}

int		formatAndPrintString(char *pcFmt, va_list lList)
{
	//Holds the number of characters printed, 0 on error
	int nChars = 0;

	while(*pcFmt != '\0')
	{
		if(*pcFmt == '%')
		{
			pcFmt++;
			int iTemp = 0;
			char acTemp[MAXLEN] = ""; 
			char *pcTemp = NULL, cTemp = 0;

			switch (*pcFmt)
			{
				case 'd':
					iTemp = va_arg(lList, int);
					acTemp = itoa(iTemp, 10); 

					for(int i = 0; i < strlen(acTemp); i++)
					{
						PRINTCHAR(acTemp[i]); nChars++;
					}
					break;
				case 's':
					pcTemp = va_arg(lList, char*);

					while(*pcTemp != '\0')
					{
						PRINTCHAR(*pcTemp); nChars++;
						pcTemp++;
					}
					break;
				case 'c':
					cTemp = va_arg(lList, int);  
					PRINTCHAR(cTemp);
					nChars++;
					break;
				default:
					break;
			}
			pcFmt++;
		}
		else 
			// print the char to console
		{
			PRINTCHAR(*pcFmt);
			pcFmt++; nChars++;
		}
	}
	return nChars;
}

int		ft_printf(const char *restrict format, ...)
{
	if(!format)
	{
		return 0;
	}

	va_list lList;
	va_start(lList, format);

	return(formatAndPrintString(format, lList));
}
