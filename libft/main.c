/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 20:37:44 by ocota             #+#    #+#             */
/*   Updated: 2015/10/23 15:00:25 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	if (!(isalpha('a') == ft_isalpha('a') && isalpha(2) == ft_isalpha(2)))
		printf("isalpha");
	if (!(isdigit('a') == ft_isdigit('a') && isdigit(2) == ft_isdigit(2)))
		printf("isdigit");
	if (!(isalnum('a') == ft_isalnum('a') && isalnum(2) == ft_isalnum(2)))
		printf("isalnum");
	if (!(isascii('a') == ft_isascii('a') && isascii(2) == ft_isascii(2)))
		printf("isascii");
	if (!(isprint('a') == ft_isprint('a') && isprint(2) == ft_isprint(2)))
		printf("isprint");
	if (!(toupper('a') == ft_toupper('a') && toupper(2) == ft_toupper(2) && toupper('A') == ft_toupper('A')))
		printf("toupper"); 
	if (!(tolower('a') == ft_tolower('a') && tolower(2) == ft_tolower(2) && tolower('A') == ft_tolower('A')))
		printf("tolower");
	if (!(atoi("1203A") == ft_atoi("1203A") && atoi(" A123") == ft_atoi(" A123") && atoi("  +126B") == ft_atoi("  +126B")))
		printf("atoi");
	return (0);
}
