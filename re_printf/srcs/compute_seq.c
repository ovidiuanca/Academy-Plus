#include "ft_printf.h"

int		compute_seq(va_list *llist, char *seq, t_arg args)
{
	int bytes;

	bytes = 0;
	bytes = bytes + case_char(llist, seq, args);
	bytes = bytes + case_number(llist, seq, args);
	return (bytes);
}
