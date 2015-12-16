#include "ft_printf.h"

int     calc_desc_len(char *format)
{
    int i;

    i = 1;
    while (ft_strchr(FLAGS, format[i]) && format[i])
        i++;
    if (ft_strchr(CONVERSIONS, format[i]) && format[i])
        return (i + 1);
    else if ((format[i] == '%') && format[i])
        return (i + 1);
    else if (ft_isalpha(format[i]) && format[i])
        return (i + 1);
    return (i);
}
