#include "ft_printf.h"

int		ft_putwstr_size(wchar_t *str, char *spaces, t_arg args)
{
	if (args.flag_minus == 0)
	{
		ft_putstr(spaces);
		ft_putwstr(str);
		return (ft_strlen(spaces) + ft_strwlen(str));
	}
	else
	{
		ft_putwstr(str);
		ft_putstr(spaces);
		return (ft_strlen(spaces) + ft_strwlen(str));
	}
}
