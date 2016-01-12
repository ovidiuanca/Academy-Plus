/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:16:53 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 17:16:53 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *str, char c)
{
	int size;

	size = ft_strlen(str);
	if (c == '\0')
		return ((char*)&str[size]);
	while (str[--size])
	{
		if (str[size] == c)
			return ((char*)&str[size]);
	}
	return (NULL);
}
