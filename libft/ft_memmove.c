/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 00:59:51 by ocota             #+#    #+#             */
/*   Updated: 2015/10/25 01:10:55 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	*ft_memmove(void *dst, const void *src, size_t len)
//{
//
//}

int		main(void)
{
	char s1[40] = "zamadepireu";
	char s2[40] = "paralel";

	printf("%s\n", memmove(s1,s2,11));
	printf("%s\n", memcpy(s1,s2,11));
	return (0);
}

//UNDONE
