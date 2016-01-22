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
	int index;
	int operations;

	operations = 0;
	index = 0;
	*second = new_node(find_min(first));
	while (index < number_of(first) - 1)
	{
		while (first->data != find_min_bigger(first, *second))
		{
			rotate_left(&first);
			ft_putstr("rra ");
			operations++;
		}
		add_node(*second, first->data);
		ft_putstr("pb ");
		operations++;
		index++;
	}
	ft_putnbr(operations);
}
