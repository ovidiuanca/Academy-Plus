#include "ft_printf.h"

int		flag_d(va_list *llist, t_arg args)
{
	char	*result;

	if (args.mod_l)
		result = arg_to_long(llist);
	else if (args.mod_z)
		result = arg_to_size_t(llist);
	else if (args.mod_j)
		result = arg_to_intmax_t(llist);
	else if (args.mod_hh)
		result = arg_to_int_hh(llist);
	else if (args.mod_h)
		result = arg_to_int_h(llist);
	else if (args.mod_ll)
		result = arg_to_longlong(llist);
	else
		result = arg_to_int(llist);
	return (print_str(result, args, 1));
}
