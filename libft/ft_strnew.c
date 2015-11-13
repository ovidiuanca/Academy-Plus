/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 02:18:44 by ocota             #+#    #+#             */
/*   Updated: 2015/11/13 17:07:20 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *address;

	if (!(address = (char*)malloc(sizeof(char) * size));
			return (NULL);
	if (address)
		return (address);
	else
		return (NULL);
}
