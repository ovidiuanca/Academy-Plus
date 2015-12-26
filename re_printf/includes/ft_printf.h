ifndef __FT_PRINTF_H

# define __FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define FLAGS "sScCdDpoOifFxX"
# define MODIFIERS "0123456789.#hljz+- *"

int		ft_printf(const char *format, ...);
int		process_format(va_list *llist, const char *format);
//TO BE MODIFIED ---------->
void	process_seq(va_list *llist, char *seq, int *bytes);
char	*arg_to_int(va_list *llist);
char	*arg_to_long(va_list *llist);
int		send_seq(va_list *llist, char *seq, int *bytes);
void	init_args(t_arg *args);
void	set_seq_flags(char *seq, t_args *args);
void	set_seq_mod(char **seq, t_args *args);
void	set_seq_wildcard(va_list *llist, char *seq, t_arg *args);
void	set_seq_wildcard_precision(va_list *llist, char **seq, t_arg *args);
void	set_seq_precision(char **seq, t_arg *args);
//MODIFIED
int		compute_seq(va_list *llist, char *seq, t_arg args);
int		first_flags(va_list *llist, char *seq, t_arg args);
int		second_flags(va_list *llist, char *seq, t_arg args);
int		flag_s(va_list *llist, t_arg args);
int		flag_c(va_list *llist, t_arg args);
int		flag_ss(va_list *llist, t_arg args);
int		flag_cc(va_list *llist, t_arg args);
int		flag_u(va_list *llist, t_arg args);
int		flag_d(va_list *llist, t_arg args);

//MODIFIED RETURNING TYPE
int		ft_strwlen(wchar_t *str);
void	ft_putwstr(wchar_t *str);
int		wchar_lenght(wchar_t c);
//MODIFIED
wchar_t	*ft_strwsub(wchar_t *str, int start, int lenght);
int		ft_putwstr_size(wchar_t *str, char *spaces, t_arg args);


typedef struct		s_arg
{
	char			flag_hash;
	char			flag_zero;
	char			flag_plus;
	char			flag_minus;
	char			flag_space;
	char			flag_dot;
	char			flag_wild;
	char			mod_h;
	char			mod_hh;
	char			mod_l;
	char			mod_ll;
	char			mod_j;
	char			mod_z;
	unsigned int	width;
	unsigned int	dot_width;
}					t_arg;
