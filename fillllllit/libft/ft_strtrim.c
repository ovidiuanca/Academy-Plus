/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 01:04:09 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 06:07:38 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	size_t	size;
	char	*trimmed;
	size_t	i;
	size_t	needle;

	size = ft_strlen(s);
	if (size == 0)
		return (ft_strnew(1));
	size--;
	while ((s[size] == '\n' || s[size] == '\t' || s[size] == ' '))
	{
		if (size == 0)
			return (ft_strnew(1));
		size--;
	}
	i = 0;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	trimmed = ft_strnew(size - i);
	if (!trimmed)
		return (NULL);
	needle = 0;
	while (i <= size)
		trimmed[needle++] = s[i++];
	return (trimmed);
}
