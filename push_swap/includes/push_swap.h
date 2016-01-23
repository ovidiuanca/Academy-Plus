/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 18:21:38 by ocota             #+#    #+#             */
/*   Updated: 2016/01/23 18:11:38 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PUSH_SWAP_H
# define __PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct		s_pretty
{
	int				data;
	struct s_pretty	*next;
}					t_pretty;

t_pretty			*new_node(int data);
void				add_node(t_pretty *begin, int data);
void				add_node_begin(t_pretty **begin, int data);
int					number_of(t_pretty *begin);
void				fill_second(t_pretty *first, t_pretty **second);
void				pop_first(t_pretty **begin);
int					is_ordered(t_pretty *begin);
void				filler(t_pretty *begin);

#endif
