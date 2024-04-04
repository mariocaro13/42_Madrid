#include "ft_printf.h"

void	ft_putchar_count(const unsigned char c, const int fd, int *count)
{
	ft_putchar_fd(c, fd);
	(*count)++;
}
