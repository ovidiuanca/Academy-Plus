#include "ft_printf.h"

void	case_D(va_list lList, int *n_chars)
{
	long	temp_long;
	char	*temp_string;
	size_t	i;

	temp_long = va_arg(lList, long);
	temp_string = ft_ltoa_base(temp_long, 10);
	i = 0;
	while (i < ft_strlen(temp_string))
	{
		ft_putchar(temp_string[i]);
		(*n_chars)++;
		i++;
	}
}
