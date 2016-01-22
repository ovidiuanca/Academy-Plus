/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:56:07 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 17:18:08 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *b, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char*)b;
	i = 0;
	while (i < len)
	{
		p[i] = 0;
		i++;
	}
}