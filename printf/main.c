/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 00:49:08 by ocota             #+#    #+#             */
/*   Updated: 2015/12/10 09:52:17 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	char a[20] = "ciorba de picioci";
	int b = -25;
	char c = 'Z';

	ft_printf("zama de cartofi: %d %s %c", b, a, c);
	printf("\n");
	printf("zama de cartofi: %d %s %c", b, a, c);
	printf("\n");
	return (0);
}
