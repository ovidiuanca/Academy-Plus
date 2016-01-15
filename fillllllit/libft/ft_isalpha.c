/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anghergh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:58:25 by anghergh          #+#    #+#             */
/*   Updated: 2015/11/03 17:18:36 by anghergh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z')
		|| (a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}
