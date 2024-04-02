#include "ft_printf.h"

void	ft_switch_format(va_list args, const char c, int *count)
{
	if (c == 'c')
		ft_write_c(va_arg(args, int), count);
	else if (c == 's')
		ft_write_s(va_arg(args, char *), count);
	else if (c == 'p')
		ft_write_p(va_arg(args, void *), count);
	else if (c == 'd')
		ft_write_d(va_arg(args, int), count);
	else if (c == 'i')
		ft_write_i(va_arg(args, int), count);
	else if (c == 'u')
		ft_write_u(va_arg(args, unsigned long), count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '\\')
		{
			format++;
			ft_write_escape(*format, &count);
		}
		if (*format == '%')
		{
			format++;
			ft_switch_format(args, *format, &count);
		}
		else
			ft_write_c(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
