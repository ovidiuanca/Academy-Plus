#ifndef __HEADER_H

# define __HEADER_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct      s_board
{
    int             n;
    struct s_board  *next;

}                   t_board;

t_board     *read_file(int *lines);
int         get_next_line(int const fd, char **line);
t_board     *l_init_list(void);
void        l_add_node(t_board *my_board, int elem);
void		print_board(int	*array, int *number);
int			ft_atoi(char *str);
int			validate_line(char *line);
int			*move_to_array(t_board *my_board, int *lines);
void		ft_putchar(char c);
void		ft_putstr(char const *str);
int			validate_user_input(char *str, int *array, int *number);
void		print_user_turn(int *array, int *number);
void		print_cpu_turn(void);
int			ft_strlen(char *str);
void		start_game(int *array, int *number);
int			get_user_decision(int *array, int *number);
char		*ft_strdup(char *str);
void		user_compute_map(int *array, int *number, int decision);
int			check_game_over(int *array);
void		cpu_easy(int *array, int *number);
void		print_new_lines(void);
void		print_user_won(void);
void		print_cpu_won(void);

#endif
