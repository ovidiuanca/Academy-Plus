/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 12:20:19 by ocota             #+#    #+#             */
/*   Updated: 2015/11/13 12:25:08 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len;
	size_t dest_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dest_len + src_len >= size) 
		return (dest_len + src_len);
	ft_memcpy(dst + dest_len, src, src_len + 1);
	return (dest_len + src_len);
}
