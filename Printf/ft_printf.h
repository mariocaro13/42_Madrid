#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

# define FD 1
# define BASE_DEC "0123456789"
# define BASE_HEX_LOWER "0123456789abcdef"
# define BASE_HEX_UPPER "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
void	ft_putchar_count(const char c, const int fd, int *count);
void	ft_putstr_count(const char *str, const int fd, int *count);
void	ft_putescape_count(const char c, const int fd, int *count);
void	ft_putpointer_count(void *pointer, const int fd, int *count);
void	ft_putnbr_in_base_x(long nbr, char *base, int fd, int *count);

#endif
