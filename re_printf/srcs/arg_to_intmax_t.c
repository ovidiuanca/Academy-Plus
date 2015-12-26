#include "ft_printf.h"

char	*arg_to_intmax_t(va_list *llist)
{
	char	*result;
	long	result_intmax_t;

	result_intmax_t = va_arg(llist, intmax_t);
	result = ft_ltoa_base(result_intmax_t, 10);
	return (result);
}
