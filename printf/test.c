/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/20 23:22:17 by ocota             #+#    #+#             */
/*   Updated: 2015/11/20 23:47:59 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void	printThem(int arg1, ...)
{
	va_list ap;
	int i;

	va_start(ap, arg1);
	for (i = arg1; i >= 0 ; i = va_arg(ap, int))
		printf("%d ", i);
	va_end(ap);
	printf("\n");
}

int		main(void)
{
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	int e = 14;
	int f = 15;
	int g = -1;

	printThem(a, b, c, d, e, f, g);
	printf("");
	return (0);
}
