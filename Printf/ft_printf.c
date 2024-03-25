#include "ft_printf.h"

void	ft_escape(const char **format, int *count)
{
	if (**format == '\\')
	{
		(*format)++;
		if (**format == 'n')
			ft_writeC('\n');
		else if (**format == 't')
			ft_writeC('\t');
		else
			ft_writeC('\\');
		(*count)++;
	}
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
				ft_writeC(va_arg(args, int));
				count++;
			}
			else if (*format == 's')
			{
				count = ft_writeS(va_arg(args, char *), count);
			}
		}
		else
		{
			ft_writeC(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
