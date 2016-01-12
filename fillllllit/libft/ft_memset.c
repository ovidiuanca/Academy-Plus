/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:08:14 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 17:22:52 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	value;

	i = 0;
	p = (unsigned char*)b;
	value = (unsigned char)c;
	while (i < len)
	{
		p[i] = value;
		i++;
	}
	return (b);
}
