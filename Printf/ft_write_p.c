#include "ft_printf.h"

void	ft_write_p(void *pointer, int *count)
{
	unsigned long	val_pointer;

	if (!pointer)
	{
		ft_write_s("(null)", count);
		return ;
	}
	val_pointer = (unsigned long)pointer;
	ft_write_s("0x", count);
	ft_write_s(ft_set_str_hex_num(val_pointer), count);
}
