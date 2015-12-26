#include "ft_printf.h"

int		first_flags(va_list *llist, char *seq, t_arg args)
{
	if (*seq == 'S' || (*seq == 's' && args.mod_l))
		return (flag_ss(Llist, args));
	else if (*seq == 's')
		return (flag_s(Llist, args));
	else if (*seq == 'C' || (*seq == 'c'))
		return (flag_cc(Llist, args));
	else if (*seq == 'c')
		return (flag_c(Llist, args));
	else if (*seq == 'U')
	{
		args.mod_l = 1;
		return (flag_u(llist, args));
	}
	else if (*seq == 'D')
	{
		args.mod_l = 1;
		return (flag_d(llist, args));
	}
	else
		return (0);
}
