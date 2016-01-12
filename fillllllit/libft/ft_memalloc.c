/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 20:40:58 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 21:00:06 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*p;
	char	*c;

	p = malloc(size);
	if (p == NULL)
		return (NULL);
	c = p;
	i = 0;
	while (i < size)
	{
		c[i] = 0;
		i++;
	}
	return (p);
}
