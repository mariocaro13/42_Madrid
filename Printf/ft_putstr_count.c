#include "ft_printf.h"

void	ft_putstr_count(const char *str, const int fd, int *count)
{
	if (!str)
	{
		ft_putstr_count("(null)", fd, count);
		return ;
	}
	while (*str)
	{
		ft_putchar_count(*str, fd, count);
		str++;
	}
}
