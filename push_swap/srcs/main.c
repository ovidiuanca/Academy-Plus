/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 18:19:20 by ocota             #+#    #+#             */
/*   Updated: 2016/01/23 18:11:21 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		verify_integer(char *string)
{
	if (*string == '-')
		string++;
	while (*string)
	{
		if (*string > '9' || *string < '0')
			return (0);
		string++;
	}
	return (1);
}

int		verify_doubles(int argc, char **argv)
{
	int index;
	int	index2;

	index = 1;
	while (index < argc)
	{
		index2 = index + 1;
		while (index2 < argc)
		{
			if (ft_strcmp(argv[index], argv[index2]) == 0)
				return (0);
			index2++;
		}
		index++;
	}
	return (1);
}

void	error_handling(int argc, char **argv)
{
	int index;

	if (argc == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	index = 1;
	while (index < argc)
	{
		if (!verify_integer(argv[index]) || !verify_doubles(argc, argv))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		index++;
	}
}

void	some_extras(t_pretty *second)
{
	if (!second->next)
		return ;
	while (second)
	{
		write(1, "pa ", 3);
		second = second->next;
	}
}

int		main(int argc, char **argv)
{
	t_pretty	*first;
	t_pretty	*second;
	int			data;
	int			index;

	error_handling(argc, argv);
	index = 2;
	first = new_node(ft_atoi(argv[1]));
	while (index < argc)
	{
		data = ft_atoi(argv[index]);
		add_node(first, data);
		index++;
	}
	if (is_ordered(first))
	{
		ft_putstr("\n");
		return (0);
	}
	fill_second(first, &second);
	filler(second);
	first = second;
	ft_putstr("\n");
	return (0);
}
