/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 18:19:14 by ocota             #+#    #+#             */
/*   Updated: 2016/01/23 18:07:45 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_left(t_pretty **first)
{
	t_pretty *copy;
	t_pretty *begin;
	t_pretty *result;

	begin = *first;
	while ((*first)->next->next)
		*first = (*first)->next;
	copy = *first;
	result = copy->next;
	(*first)->next->next = begin;
	copy->next = NULL;
	*first = result;
}

int		find_min(t_pretty *list)
{
	int min;

	min = 2147483647;
	while (list)
	{
		if (list->data < min)
			min = list->data;
		list = list->next;
	}
	return (min);
}

int		find_min_bigger(t_pretty *first, t_pretty *second)
{
	int min;
	int	min_second;

	min = 2147483647;
	while (second->next)
		second = second->next;
	min_second = second->data;
	while (first)
	{
		if (first->data < min && first->data > min_second)
			min = first->data;
		first = first->next;
	}
	return (min);
}

void	fill_second(t_pretty *first, t_pretty **second)
{
	int ex;

	ex = find_min(first);
	*second = new_node(ex);
	while (first)
	{
		while (first->data != find_min(first))
		{
			rotate_left(&first);
			ft_putstr("rra ");
		}
		if (first->data != ex)
			add_node(*second, first->data);
		pop_first(&first);
		ft_putstr("pb ");
	}
}
