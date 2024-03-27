#include "ft_printf.h"

void	ft_write_c(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
