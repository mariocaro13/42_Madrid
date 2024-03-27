#include "ft_printf.h"

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
			if (*format == 'c')
				ft_write_c(va_arg(args, int), &count);
			else if (*format == 's')
				ft_write_s(va_arg(args, char *), &count);
			else if (*format == 'p')
				ft_write_p(va_arg(args, void *), &count);
		}
		else
			ft_write_c(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
