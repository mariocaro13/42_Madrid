#include "ft_printf.h"
#include <stdio.h>

int	test_char(void)
{
	char	c = 'c';
	int		original;
	int		custom;

	printf("%s", "Testing CHAR: \n");
	printf("O: ");

	//Test here
	original = printf("%c", c);

	printf(". Out: %d. \n", original);

	printf("%s", "C: ");
	fflush(stdout);

	//Test Here
	custom = ft_printf("%c", c);

	printf(". Out: %d.\n", custom);

	if (original == custom)
		return (0);
	return (1);
}

int	main (void)
{
	printf("%s\n", "Running mcaro-ro test for printf.");
	printf("%s\n", "O -> Original function.");
	printf("%s\n\n", "C -> Custom function.");

	if (test_char() == 0)
		printf("%s\n", "It looks the same to me!!");
	else
		printf("%s\n", "Something is wrong here.");
	return (0);
}
