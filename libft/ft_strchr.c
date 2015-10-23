/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 20:03:42 by ocota             #+#    #+#             */
/*   Updated: 2015/10/23 20:28:19 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*copy;

	copy = ft_strdup(s);
	i = 0;
	while (copy[i])
	{
		if (copy[i] == c)
			return (copy + i);
		i++;
	}
	return (NULL);
}
