#include "ft_printf.h"

void	ft_escape(const char **format, int *count)
{
	if (**format == '\\')
	{
		(*format)++;
		if (**format == 'n')
			ft_putchar('\n');
		else if (**format == 't')
			ft_putchar('\t');
		else
			ft_putchar('\\');
		(*count)++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		ft_escape(&format, &count);
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				ft_putchar(va_arg(args, int));
				count++;
			}
		}
		else
		{
			ft_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
