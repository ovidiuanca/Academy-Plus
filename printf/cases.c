#include "header.h"

void	case_d(va_list lList, int *nChars)
{
	int		temp_int;
	char	*temp_string;
	int		i;

	temp_int = va_arg(lList, int);
	temp_string = ft_itoa_base(temp_int, 10);
	i = 0;
	while (i < strlen(temp_string))
	{
		ft_putchar(temp_string[i]);
		*nChars++;
		i++;
	}

}
