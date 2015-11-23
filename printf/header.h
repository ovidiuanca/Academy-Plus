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

#endif
