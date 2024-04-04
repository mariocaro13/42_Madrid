#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	if (!str)
		return (-1);
	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '\\')
		{
			str++;
			ft_putescape_count(*str, FD, &count);
		}
		if (*str == '%')
		{
			str++;
			ft_switch_format(args, *str, &count);
		}
		else
			ft_putchar_count(*str, FD, &count);
		str++;
	}
	va_end(args);
	return (count);
}
