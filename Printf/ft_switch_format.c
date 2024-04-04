#include "ft_printf.h"

void	ft_switch_format(va_list args, const unsigned char c, int *count)
{
	if (c == 'c')
		ft_putchar_count(va_arg(args, int), FD, count);
	else if (c == 's')
		ft_putstr_count(va_arg(args, char *), FD, count);
	else if (c == 'p')
		ft_putpointer_count(va_arg(args, void *), FD, count);
	else if (c == 'd')
		ft_putnbr_in_base_x(va_arg(args, int), BASE_DEC, FD, count);
	else if (c == 'i')
		ft_putnbr_in_base_x(va_arg(args, int), BASE_DEC, FD, count);
	else if (c == 'u')
		ft_putnbr_in_base_x(va_arg(args, unsigned long), BASE_DEC, FD, count);
	else if (c == 'x')
		ft_putnbr_in_base_x(va_arg(args, long), BASE_HEX_LOWER, FD, count);
	else if (c == 'X')
		ft_putnbr_in_base_x(va_arg(args, long), BASE_HEX_UPPER, FD, count);
	else if (c == '%')
		ft_putchar_count('%', FD, count);
}
