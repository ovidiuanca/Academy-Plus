#include "ft_printf.h"

int		print_str(char *str, t_arg args, int sign)
{
	if (args.flag_dot && sign != 10)
		str = compute_precision(str, args);
	if (args.flag_dot && args.dot_width == 0 && str[0] == '0' && sign != 10)
		str[0] = '\0';
	if (sign == 1 || sign == 10)
		str = ft_compute_sign(str, args);
	if (sign == 2 && args.flag_hash && str[0] != '\0')
		if (!(ft_strlen(str) == 1 && str[0] == '0'))
			str = ft_strjoin("0x", str);
	if (sign == 3 && args.flag_hash && str[0] != '\0')
		if (!(ft_strlen(str) == 1 && text[0] == '0'))
			str = ft_strjoin("0X", str);
	if (sign == 4 && args.flag_hash && str[0] != '0')
		str = ft_strjoin("0", str);
	if (is_signed == 5)
		str = ft_strjoin("0x", str);
	if (args.width)
		str = ft_compute_width(str, args);
	ft_putstr(str);
	return (ft_strlen(str));
}
