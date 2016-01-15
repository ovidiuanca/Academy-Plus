/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 14:25:07 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/05 23:18:31 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	size_t	i;
	char	*str;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * (s1_size + s2_size + 1));
	i = 0;
	while (i < s1_size)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2_size)
	{
		str[s1_size + i] = s2[i];
		i++;
	}
	str[s1_size + s2_size] = '\0';
	return (str);
}
