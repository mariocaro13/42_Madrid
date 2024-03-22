#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				ft_putchar(va_arg(args, int));
		}
	}
	va_end(args);
	return (0); //Should returns the number of characters printed on the standard output
}
