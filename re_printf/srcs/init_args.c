#include "ft_printf.h"

void	init_args(t_args *args)
{
	args->flag_hash = 0;
	args->flag_zero = 0;
	args->flag_plus = 0;
	args->flag_minus = 0;
	args->flag_space = 0;
	args->flag_dot = 0;
	args->flag_wild = 0;
	args->mod_h = 0;
	args->mod_hh = 0;
	args->mod_l = 0;
	args->mod_ll = 0;
	args->mod_j = 0;
	args->mod_z = 0;
	args->width = 0;
	args->dot_width = 0;
}
