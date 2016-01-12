/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:21:15 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 12:58:12 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *next;

	while (*alst)
	{
		next = (*alst)->next;
		del(*alst, (*alst)->content_size);
		free(*alst);
		*alst = (*alst)->next;
	}
}
