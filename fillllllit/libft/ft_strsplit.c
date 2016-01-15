/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 23:32:29 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 16:48:36 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int		ft_sentences(const char *s, char c)
{
	int size;
	int separated;
	int i;

	i = 0;
	separated = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c && !separated)
		{
			size++;
			separated = 1;
		}
		if (s[i] == c)
			separated = 0;
		i++;
	}
	return (size);
}

static int		ft_wordsize(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char			**ft_strsplit(const char *s, char c)
{
	int		i;
	int		pos;
	int		size;
	char	**map;

	map = (char**)malloc(sizeof(*map) * (ft_sentences(s, c) + 1));
	i = 0;
	pos = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		size = ft_wordsize(&s[i], c);
		map[pos] = (char*)malloc(sizeof(**map) * (size + 1));
		ft_strncpy(map[pos], &s[i], size);
		while (s[i] != c && s[i] != '\0')
			i++;
		pos++;
	}
	map[pos] = NULL;
	return (map);
}
