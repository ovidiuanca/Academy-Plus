/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 14:41:07 by ocota             #+#    #+#             */
/*   Updated: 2015/10/23 15:02:55 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	long result;
	int res;
	int sign;
	int i;
	
	i = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i++] == '-')
		sign = -1;
	else if (str[i++] == '+')
		sign = 1;
	while (str[i])
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i++] - 48);
		else
			return (result);
	res = result * sign;
	return (res);
}
