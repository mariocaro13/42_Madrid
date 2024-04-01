#include "ft_printf.h"

void	ft_set_str_zero(int i, char *str, int len);

void	ft_int_to_hex(unsigned long num, char *str);

int		ft_ignore_zeros(const char *str);

char	*ft_set_str_hex_num(unsigned long val)
{
	static char	str[17];

	ft_set_str_zero(0, str, 16);
	ft_int_to_hex(val, str);
	return (&str[ft_ignore_zeros(str)]);
}

void	ft_set_str_zero(int i, char *str, int len)
{
	while (i < len)
		str[i++] = '0';
	str[len] = '\0';
}

void	ft_int_to_hex(unsigned long num, char *str)
{
	const char	*hex_digits;
	int			i;

	hex_digits = "0123456789abcdef";
	i = ft_strlen(str);
	if (num == 0)
		str[i] = 0;
	else
	{
		while (num > 0)
		{
			str[i--] = hex_digits[num % 16];
			num /= 16;
		}
	}
}

int	ft_ignore_zeros(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == '0' && i < ft_strlen(str))
		i++;
	return (i);
}
