#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_write_escape(const char c, int *count);
void	ft_write_c(char c, int *count);
void	ft_write_s(char *str, int *count);
void	ft_write_p(void *pointer, int *count);
void	ft_write_d(int num, int *count);
void	ft_write_i(int num, int *count);
void	ft_write_u(unsigned long num, int *count);
char	*ft_set_str_hex_num(unsigned long val);

#endif
