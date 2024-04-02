#include "ft_printf.h"

void	ft_write_d(int num, int *count)
{
	char *str;

	str = ft_itoa(num);
	if (str)
		ft_write_s(str, count);
	free(str);
}
