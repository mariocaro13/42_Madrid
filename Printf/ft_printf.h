#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

void	ft_writeC(char c);
int		ft_writeS(char *str, int count);
int		ft_printf(const char *format, ...);

#endif
