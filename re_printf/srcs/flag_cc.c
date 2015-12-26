#include "ft_printf.h"

int		flag_cc(va_list *llist, t_arg args)
{
	wchar_t arg;

	arg = va_arg(*llist, int);
	(void)args;
	ft_putwchar(arg);
	return (wchar_lenght(arg));
}
