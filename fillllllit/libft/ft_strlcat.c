/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:42:48 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 20:37:29 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_size;

	i = 0;
	dst_size = 0;
	while (dst[dst_size] != '\0')
	{
		if (dst_size == size)
			return (dst_size + ft_strlen(src));
		dst_size++;
	}
	size--;
	while (dst_size + i < size && src[i] != '\0')
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + ft_strlen(src));
}
