/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 20:22:03 by ocota             #+#    #+#             */
/*   Updated: 2015/10/23 20:28:14 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*copy;

	copy = ft_strdup(s);
	i = 0;
	while (copy[i])
		i++;
	while (i >= 0)
	{
		if (c == copy[i])
			return (copy + i);
		i--;
	}
	return (NULL);
}
