#include "ft_printf.h"

void	ft_putwstr(wchar_t *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putwchar(str[index]);
		index++;
	}
}
