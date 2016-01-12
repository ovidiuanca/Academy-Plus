/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:21:15 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/06 12:30:24 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	del(*alst, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
