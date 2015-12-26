#include "ft_printf.h"

void	set_seq_flags(char *seq, t_arg *args)
{
	if (*seq == '#')
		args->flag_hash = 1;
	if (*seq == '0')
		args->flag_zero = 1;
	if (*seq == '+')
		args->flag_plus = 1;
	if (*seq == '-')
		args->flag_minus = 1;
}
