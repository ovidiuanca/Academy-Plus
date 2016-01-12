/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:16:00 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 03:34:34 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const unsigned char *s1, const unsigned char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
