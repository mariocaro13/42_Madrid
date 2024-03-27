#include "ft_printf.h"

void	ft_write_s(char *str, int *count)
{
	if (!str)
	{
		ft_write_s("(null)", count);
		return ;
	}
	while (*str)
	{
		ft_write_c(*str, count);
		str++;
	}
}
