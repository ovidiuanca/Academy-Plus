#include "ft_printf.h"

void	set_seq_mod(char **seq, t_arg *args)
{
	if (**seq == 'h' && *(*seq + 1) == 'h')
	{
		args->mod_hh = 1;
		(*seq)++;
	}
	else if (**seq == 'l' && *(*seq + 1) == 'l')
	{
		args->mod_ll = 1;
		(*seq)++;
	}
	else if (**seq == 'h')
		args->mod_h = 1;
	else if (**seq == 'l')
		args->mod_l = 1;
	else if (**seq == 'j')
		args->mod_j = 1;
	else if (**seq == 'z')
		args->mod_z = 1;
}
