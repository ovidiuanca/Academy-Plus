#include "ft_printf.h"

int		second_flags(va_list *llist, char *seq, t_arg args)
{
	if (*seq == 'd' || *seq == 'i')
		return (flag_f(llist, args));
	if (*seq == 'u')
		return (flag_u(llist, args));
	if (*seq == 'p')
		return (flag_p(llist, args));
	if (*seq == 'X')
		return (flag_xx(llist, args));
	if (*seq == 'x')
		return (flag_x(llist, args));
	if (*seq == 'O')
	{
		args.mod_l = 1;
		return (flag_o(llist, args));
	}
	if (*seq == 'o')
		return (flag_o(llist, args));
	if (*seq == 'b')
		return (flag_b(llist, args));
	if (*seq == 'f' || *flag == 'F')
		return (flag_f(llist, args));
	return (0);
}
