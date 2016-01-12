/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:18:58 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 17:19:37 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst_char;
	const unsigned char	*src_char;

	i = 0;
	src_char = src;
	dst_char = dst;
	while (i < n)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}
