/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/16 10:29:21 by ocota             #+#    #+#             */
/*   Updated: 2015/11/20 18:48:27 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		fill_data(int const fd, char **all_data)
{
	char	*buff;
	int		option;
	char	*temp;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	option = read(fd, buff, BUFF_SIZE);
	if (option > 0)
	{
		buff[option] = '\0';
		temp = ft_strjoin(*all_data, buff);
		free(*all_data);
		*all_data = temp;
	}
	free(buff);
	return (option);
}


int		get_next_line(int const fd, char **line)
{
	static char *all_data = NULL;
	char		*rest;
	int			option;
	if ((!all_data && (all_data = (char *)malloc(sizeof(*all_data))) == NULL) || !line
			|| fd < 0 || BUFF_SIZE < 0)
		return (-1);
	rest = ft_strchr(all_data, '\n');
	while (rest == NULL)
	{
		option = fill_data(fd, &all_data);
		if (option == 0)
		{
			if (ft_strlen(all_data) == 0)
				return (0);
			all_data = ft_strjoin(all_data, "\n");
		}
		if (option < 0)
			return (-1);
		else
			rest = ft_strchr(all_data, '\n');
	}
	//write(1, "sigur", 6);
	*line = ft_strsub(all_data, 0, ft_strlen(all_data) - ft_strlen(rest));
	//write(1, "SUNT", 5);
	all_data = ft_strdup(rest + 1);
	//write(1, "AICI", 5);
	return (1);
}
