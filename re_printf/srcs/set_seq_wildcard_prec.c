#include "ft_printf.h"

void	set_seq_wildcard_precision(va_list *llist, char **seq, t_arg *args)
{
	int width;

	if (**seq == '.' && *(*flag) == '*')
	{
		width = va_arg(*llist, int);
		if (width > 0)
		{
			args->flag_dot = 1;
			args->dot_width = width;
		}
		else
		{
			args->flag_wild = 1;
			args->dot_width = -width;
		}
		*(seq++);
	}
}
