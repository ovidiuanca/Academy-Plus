/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:20:57 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 17:20:58 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	needle;

	i = 0;
	needle = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[needle] != '\0' && needle < n)
	{
		s1[i + needle] = s2[needle];
		needle++;
	}
	s1[i + needle] = '\0';
	return (s1);
}
