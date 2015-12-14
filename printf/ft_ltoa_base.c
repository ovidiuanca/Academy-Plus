#include "ft_printf.h"

char	*ft_ltoa_base(long val, int base)
{
	static char buf[32] = {0};
	int			i;
	int			sign;	

	sign = 1;
	i = 30;
	if (val < 0)
	{
		sign = -1;
		val = val * sign;
	}
	while (val && i)
	{
		buf[i] = "0123456789abcdef"[val % base];
		--i;
		val /= base;
	}
	if (sign < 0)
	{
		buf[i] = '-';
		--i;
	}
	return (&buf[i + 1]);
}
