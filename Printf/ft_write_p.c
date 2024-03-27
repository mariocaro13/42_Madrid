#include "ft_printf.h"

char	*ft_int_to_hex(unsigned long val);

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
	ft_write_s(ft_int_to_hex(val_pointer), count);
}

char	*ft_int_to_hex(unsigned long val)
{
	const char	*hex_digits;
	static char	str[17];
	int			iterator_str;

	hex_digits = "0123456789abcdef";
	iterator_str = 0;
	while (iterator_str < 16)
		str[iterator_str++] = '0';
	str[16] = '\0';
	if (val == 0)
		str[iterator_str] = '0';
	else
	{
		while (val > 0)
		{
			str[iterator_str--] = hex_digits[val % 16];
			val /= 16;
		}
	}
	iterator_str = 0;
	while (str[iterator_str] == '0' && iterator_str < 15)
	{
		iterator_str++;
	}
	return (&str[iterator_str]);
}
