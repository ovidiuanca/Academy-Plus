/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwhole.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 15:56:53 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 16:06:50 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_put0(char *s, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (s[i] == 0)
			ft_putstr("\\0");
		else
			ft_putchar(s[i]);
		i++;
	}
}
