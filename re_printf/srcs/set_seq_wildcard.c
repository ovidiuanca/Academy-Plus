#include "ft_printf.h"

void	set_seq_wildcard(va_list *llist, char *seq, t_arg *args)
{
	int width;

	if (*seq == '*')
	{
		width = va_arg(*llist, int);
		if (width > 0)
			args->width = width;
		else
		{
			args->width = -width;
			args->flag_minus = 1;
		}
	}
}
