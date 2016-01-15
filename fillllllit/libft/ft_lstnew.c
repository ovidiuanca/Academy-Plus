/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 10:57:33 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 14:29:23 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	node = (t_list*)malloc(sizeof(t_list));
	if (node)
	{
		node->content = (void*)content;
		if (!content)
			node->content_size = 0;
		else
			node->content_size = content_size;
		node->next = NULL;
	}
	return (node);
}
