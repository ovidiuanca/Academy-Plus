#include "ft_printf.h"

void	case_d(va_list lList, int *n_chars)
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
		*n_chars++;
		i++;
	}
}

void	case_s(va_list lList, int *n_chars)
{
	char *temp_string;

	temp_string = va_arg(lList, char*);
	while (*temp_string)
	{
		ft_putchar(*temp_string);
		*n_chars++;
		temp_string++;
	}
}

void	case_c(va_list lList, int *n_chars)
{
	char temp_char;

	temp_char = va_arg(lList, int);
	ft_putchar(temp_char);
	*n_chars++;
}
