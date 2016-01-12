/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 19:33:44 by anghergh          #+#    #+#             */
/*   Updated: 2015/12/24 06:50:47 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int	check_line(char *str, int *count)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (str[i] != '#' && str[i] != '.')
			err_reading();
		if (str[i] == '#')
			(*count)++;
		i++;
	}
	return (1);
}

int	read_line(int fd, char **line)
{
	char	buff[6];
	int		i;
	int		count;
	int		result;

	count = 0;
	i = -1;
	ft_bzero(buff, 6);
	*line = ft_strnew(15);
	while (++i < 4)
	{
		if ((result = read(fd, buff, 5)) != 5)
			err_reading();
		if (ft_strchr(buff, '\n') - buff != 4)
			err_reading();
		if (!check_line(buff, &count))
			err_reading();
		ft_strncpy(&(*line)[4 * i], buff, 4);
	}
	if (count != 4)
		err_reading();
	return (1);
}
