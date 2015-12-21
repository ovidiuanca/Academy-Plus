#include "header.h"

int     ft_atoi(char *str)
{
    int result;
    
    result = 0;
    while (*str == ' ')
        str++;
    while (*str)
    {
        result = (result * 10) + (*str - '0');
        str++;
    }
    return (result);
}
