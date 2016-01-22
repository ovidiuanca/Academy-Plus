#ifndef __PUSH_SWAP_H
# define __PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

typedef struct		s_pretty
{
	int				data;
	struct s_pretty	*next;
}					t_pretty;

t_pretty	*new_node(int data);
void		add_node(t_pretty *begin, int data);
void		add_node_begin(t_pretty **begin, int data);
int			number_of(t_pretty *begin);
void		fill_second(t_pretty *first, t_pretty **second);

#endif
