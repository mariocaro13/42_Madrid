#include "ft_printf.h"

void	ft_putpointer_count(void *pointer, const int fd, int *count)
{
	unsigned long	val_pointer;

	if (!pointer)
	{
		ft_putstr_count("(null)", fd, count);
		return ;
	}
	val_pointer = (unsigned long)pointer;
	ft_putstr_count("0x", fd, count);
	ft_putnbr_in_base_x(val_pointer, BASE_HEX_LOWER, fd, count);
}
