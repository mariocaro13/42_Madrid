#include "ft_printf.h"

void	ft_putescape_count(const unsigned char c, const int fd, int *count)
{
	if (c == 'n')
	{
		ft_putchar_count('\n', fd, count);
		return ;
	}
	if (c == 't')
	{
		ft_putchar_count('\t', fd, count);
		return ;
	}
	if (c == '\"')
	{
		ft_putchar_count('\"', fd, count);
		return ;
	}
	if (c == '\'')
	{
		ft_putchar_count('\"', fd, count);
		return ;
	}
	ft_putchar_count('\\', fd, count);
}
