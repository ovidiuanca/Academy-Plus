#include "ft_printf.h"

char	*arg_to_long(va_list *llist)
{
	char	*result;
	long	result_long;

	result_long = va_arg(llist, long);
	result = ft_ltoa_base(result_long, 10);
	return (result);
}
