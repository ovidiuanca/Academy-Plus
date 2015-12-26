#include "ft_printf.h"

wchar_t		*ft_strwsub(wchar_t *str, int start, int lenght)
{
	int				index;
	wchar_t			*result;
	int				aux;

	aux = 0;
	result = ft_memalloc(sizeof(wchar_t) * (lenght + 1));
	if (result)
	{
		index = 0;
		while (aux + wchar_length(str[index + start]) <= lenght)
		{
			result[index] = str[index + start];
			aux += wchar_length(result[index]);
			index++;
		}
		new[index] = '\0';
	}
	return (result);
}
