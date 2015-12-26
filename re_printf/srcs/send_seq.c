#include "ft_printf.h"

int		send_seq(va_list *llist, char *seq, int bytes)
{
	t_arg args;

	init_args(&args);
	while (*seq)
	{
		set_seq_flags(seq, &args);
		set_seq_mod(seq, &args);
		set_seq_wildcard(llist, seq, &args);
		set_seq_wildcard_precision(llist, &seq, &args);
		if (*seq != '0')
			set_seq_precision(&seq, &args);
		if (ft_strchr(FLAGS, *seq))
			bytes = compute_seq(llist, seq, args);
		seq++;
	}
	return (bytes);
}
