#include "ft_printf.h"

int		flag_c(va_list *llist, t_arg args)
{
	unsigned char	arg;
	int				lenght;
	char			c;

	lenght = 1;
	if (args.flag_zero)
		c = '0';
	else
		c = ' ';
	arg = va_arg(*llist, int);
	if (!args.flag_minus)
		while (args.width > 1)
		{
			ft_putchar(c);
			lenght++;
			args.width--;
		}
	ft_putchar(arg);
	while (args.width > 1)
	{
		ft_putchar(c);
		lenght++;
		args.width--;
	}
	return (lenght);
}
