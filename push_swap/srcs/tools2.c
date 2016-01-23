/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/23 16:48:24 by ocota             #+#    #+#             */
/*   Updated: 2016/01/23 18:16:04 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_ordered(t_pretty *begin)
{
	int ok;

	ok = 1;
	while (begin->next)
	{
		if (begin->data > begin->next->data)
			ok = 0;
		begin = begin->next;
	}
	return (ok);
}

void	filler(t_pretty *begin)
{
	while (begin)
	{
		ft_putstr("pa ");
		begin = begin->next;
	}
}
