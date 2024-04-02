#include "ft_printf.h"

void	ft_write_u(unsigned long num, int *count)
{
	char *str;
	if (!num || !count)
		return ;
	str = ft_itoa(num);
	if (str)
		ft_write_s(str, count);
	free(str);
}
