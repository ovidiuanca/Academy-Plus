/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 17:09:59 by ocota             #+#    #+#             */
/*   Updated: 2015/11/13 17:11:30 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int i;
	
	i = 0;
	while (s[i])
		s[i] = '\0';
	s[i] = '\0';
	return (s);
}
