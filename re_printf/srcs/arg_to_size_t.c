#include "ft_printf.h"

char	*arg_to_size_t(va_list *llist)
{
	char	*result;
	size_t	result_size_t;

	result_size_t = va_arg(llist, size_t);
	result = ft_ltoa_base(result_size_t, 10);
	return (result);
}
