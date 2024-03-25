#include "ft_printf.h"

void	ft_writeC(char c)
{
	write(1, &c, 1);
}

int	ft_writeS(char *str, int count)
{
	if (!str)
		return (ft_writeS("(null)", count));
	while (*str)
	{
		ft_writeC(*str);
		str++;
		count++;
	}
	return (count);
}
