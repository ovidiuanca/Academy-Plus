#include "ft_printf.h"

int		ft_strwlen(wchar_t *str)
{
	int		lenght;
	int		index;

	lenght = 0;
	index = 0;
	while (str[index])
	{
		lenght += wchar_length(str[index]);
		index++;
	}
	return (lenght);
}
