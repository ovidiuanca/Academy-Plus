#include "ft_printf.h"

int		flag_s(va_list *llist, t_arg args)
{
	char	*str;
	char	*spaces;
	char	c;

	str = va_arg(*llist, char *);
	if (args.flag_zero)
		c = '0';
	else
		c = ' ';
	if (!str)
		str = ft_strdup("(null)");
	if (args.flag_dot && args.dot_width < ft_strlen(str))
		str = ft_strsub(str, 0, args.dot_width);
	if ((args.flag_dot || args.flag_wild) && args.dot_width == 0)
		str = ft_strdup("");
	if (args.width > ft_strlen(str))
	{
		spaces = ft_memalloc(args.width - ft_strlen(str) + 1);
		spaces = ft_memset(spaces, c, args.width - ft_strlen(str));
		if (args.flag_minus == 0)
			str = ft_strjoin(spaces, str);
		else
			str = ft_strjoin(str, spaces);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}
