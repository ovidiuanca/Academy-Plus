#include "ft_printf.h"

int		flag_ss(va_list *llist, t_arg args)
{
	wchar_t		*str;
	char		*spaces;
	char		c;

	str = va_arg(*llist, wchar_t *);
	if (args.flag_zero)
		c = '0';
	else
		c = ' ';
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	if (args.flag_dot && args.dot_width < ft_strwlen(str))
		str = ft_strwsub(str, 0, args.dot_width);
	if (args.width > ft_strwlen(str))
	{
		spaces = ft_memalloc(args.width - ft_strwlen(str) + 1);
		spaces = ft_memset(spaces, c, args.width - ft_strwlen(str));
		return (ft_putwstr_width(str, spaces, args));
	}
	ft_putwstr(str);
	return (ft_strwlen(str));
}
