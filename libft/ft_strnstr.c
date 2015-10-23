/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 21:17:00 by ocota             #+#    #+#             */
/*   Updated: 2015/10/23 21:51:29 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		j;
	int		k;
	int		ok;
	size_t	i;
	char	*copy;

	copy = ft_strdup(s1);
	i = 0;

	while (i < n)
	{
		j = 0;
		k = i;
		ok = 1;
		while (s2[j] && ok)
		{
			if (copy[k] == s2[j])
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
