/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 13:09:08 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 15:42:55 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *element;
	t_list *elemorig;
	t_list *aux;

	element = NULL;
	while (lst)
	{
		aux = f(lst);
		if (!element)
		{
			element = ft_lstnew(aux, aux->content_size);
			elemorig = element;
		}
		else
		{
			element->next = ft_lstnew(aux, aux->content_size);
			element = element->next;
		}
		lst = lst->next;
	}
	return (elemorig);
}
