/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:07:11 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 17:08:08 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *tmp;

	tmp = (char*)malloc(sizeof(*tmp) * (len + 1));
	if (!tmp)
		return (NULL);
	ft_strncpy(tmp, src, len);
	ft_strncpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
