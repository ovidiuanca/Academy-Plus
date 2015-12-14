#include "ft_printf.h"

char	*ft_itoa_base(int val, int base)
{
	static char buf[32] = {0};
	int		i;
	int		sign;
	long	result;

	result = val;
	sign = 1;
	i = 30;
	if (result < 0)
	{
		sign = -1;
		result = result * sign;
	}
	while (result && i)
	{
		buf[i] = "0123456789abcdef"[result % base];
		--i;
		result /= base;
	}
	if (sign < 0)
	{
		buf[i] = '-';
		--i;
	}
	return (&buf[i + 1]);
}
