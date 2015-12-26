#include "ft_printf.h"

int		find_end(const char *format)
{
	int index;
	
	index = 1;
	if (format[i] == '\0')
		return (0);
	while (ft_strchr(MODIFIERS, format[index]))
		index++;
	if (ft_strchr(FLAGS, format[index]))
		return (index);
	return (index - 1);
}

int		process_format(va_list *llist, const char *format)
{
	char	*seq;
	int		bytes;
	int		end;

	bytes = 0;
	while (*format)
	{
		if (*format == '%')
		{
			end = find_end(format);
			seq = ft_strsub(format, 0, end + 1);
			process_seq(llist, seq, &bytes);
			format += end;
		}
		else
		{
			ft_putchar(*format);
			bytes++;
		}
		format++;
	}
	return (bytes);
}

int		ft_printf(const char *format, ...)
{
	va_list llist;
	int		bytes;

	va_start(llist, format);
	bytes = process_format(&llist, format);
	va_end(llist);
	return (bytes);
}
