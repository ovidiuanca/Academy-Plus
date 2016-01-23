/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 18:19:07 by ocota             #+#    #+#             */
/*   Updated: 2016/01/23 16:44:10 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pretty	*new_node(int data)
{
	t_pretty	*new;

	new = (t_pretty*)malloc(sizeof(t_pretty));
	new->next = NULL;
	new->data = data;
	return (new);
}

void		add_node(t_pretty *begin, int data)
{
	t_pretty	*new;

	new = new_node(data);
	while (begin->next)
		begin = begin->next;
	begin->next = new;
}

void		add_node_begin(t_pretty **begin, int data)
{
	t_pretty *node;

	node = new_node(data);
	node->next = *begin;
	*begin = node;
}

int			number_of(t_pretty *begin)
{
	int number;

	number = 0;
	while (begin)
	{
		number++;
		begin = begin->next;
	}
	return (number);
}

void	pop_first(t_pretty **begin)
{
	t_pretty *to_delete;

	to_delete = *begin;
	*begin = (*begin)->next;
	free(to_delete);
}
