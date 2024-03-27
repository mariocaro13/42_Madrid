#include "ft_printf.h"

void	ft_write_escape(const char c, int *count)
{
	if (c == 'n')
	{
		ft_write_c('\n', count);
		return ;
	}
	if (c == 't')
	{
		ft_write_c('\t', count);
		return ;
	}
	ft_write_c('\\', count);
}
