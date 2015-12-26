#include "ft_printf.h"

char	*arg_to_int(va_list *llist)
{
	char	*result;
	int		result_int;

	result_int = va_arg(*llist, int);
	result = ft_itoa(result_int);
	return (result);
}
