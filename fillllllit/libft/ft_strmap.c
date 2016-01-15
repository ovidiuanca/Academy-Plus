/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 02:36:42 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/04 03:23:43 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	str_size;
	size_t	i;
	char	*map;

	str_size = ft_strlen(s);
	map = (char*)malloc(sizeof(*map) * (str_size + 1));
	if (!map)
		return (NULL);
	i = 0;
	while (i < str_size)
	{
		map[i] = f(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
