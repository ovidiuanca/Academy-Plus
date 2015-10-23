/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 20:31:15 by ocota             #+#    #+#             */
/*   Updated: 2015/10/23 21:14:20 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;
	int		ok;
	char	*copy;

	copy = ft_strdup(s1);
	i = 0;

	while (copy[i])
	{
		k = i;
		j = 0;
		ok = 1;
		while (s2[j] && ok)
		{
			if (copy[k] != s2[j])
				ok = 0;
			k++;
			j++;
		}
		if (ok)
			return (copy + i);
		i++;
	}
	return (NULL);
}
