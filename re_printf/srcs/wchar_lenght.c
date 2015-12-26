#include "ft_printf.h"

int		wchar_lenght(wchar_t c)
{
	if (c < 0x7F)
		return (1);
	else if (c < 0x7FF)
		return (2);
	else if (c < 0xFFFF)
		return (3);
	else
		return (4);
}
