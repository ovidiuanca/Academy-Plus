/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:16:59 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 17:16:59 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int little_size;
	int big_size;
	int cursor;
	int iterator;
	int ok;

	if (*little == '\0')
		return ((char*)big);
	cursor = -1;
	little_size = ft_strlen(little);
	big_size = ft_strlen(big);
	while (++cursor <= big_size - little_size)
	{
		iterator = -1;
		ok = 1;
		while (++iterator < little_size)
			if (big[cursor + iterator] != little[iterator])
				ok = 0;
		if (ok)
			return ((char*)&big[cursor]);
	}
	return (NULL);
}
