#include "ft_printf.h"

void	set_seq_precision(char **seq, t_arg *args)
{
	if (ft_isdigit(**seq))
	{
		args->width = 0;
		while (ft_is_digit(**seq))
		{
			args->width = args->width * 10 + **seq - 48;
			(*seq)++;
		}
		(*seq)--;
	}
	else if (**seq == '.')
	{
		args->flag_dot = 1;
		(*seq)++;
		args->dot_width = 0;
		while (ft_isdigit(**flag))
		{
			args->dot_width = args->dot_width * 10 + **seq - 48;
			(*seq)++;
		}
		(*seq)--;
	}
}
