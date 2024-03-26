#include "../../Printf/ft_printf.h"
#include <stdio.h>

void	text()
{
	printf("C: ");
	fflush(stdout);
}

void	output(int original, int custom)
{
	if (original == custom)
		printf("%s\n\n", "It looks the same to me!!");
	else
		printf("%s\n\n", "Something is wrong here.");
}

void	testC(void)
{
	char	c = 'c';
	int		original;
	int		custom;

	printf("%s", "Testing CHAR: \n");
	printf("O: ");

	//Test here
	original = printf("%c", c);
	printf(". Out: %d. \n", original);
	
	text();

	//Test Here
	custom = ft_printf("%c", c);
	printf(". Out: %d.\n", custom);
	output(original, custom);
}	

void	testS(void)
{
	char	*str = NULL;
	int	original;
	int	custom;
	printf("Testing STRING: \n");
	printf("O: ");

	//Test here
	original = printf("%s", str);
	printf(". Out: %d. \n", original);

	text();

	//Test here
	custom = ft_printf("%s", str);
	printf(". Out: %d.\n", custom);
	output(original, custom);
}


void	testC_S(void)
{
	char	c = 'c';
	char	*str = "I am a string";
	int	original;
	int	custom;
	printf("Testing CHAR and STRING: \n");
	printf("O: ");

	//Test here
	original = printf("%c %s", c, str);
	printf(". Out: %d. \n", original);

	text();

	//Test here
	custom = ft_printf("%c %s", c, str);
	printf(". Out: %d.\n", custom);
	output(original, custom);
}



int	main (void)
{
	printf("%s\n", "Running mcaro-ro test for printf.");
	printf("%s\n", "O -> Original function.");
	printf("%s\n\n", "C -> Custom function.");

	testC();
	testS();
	testC_S();
	return (0);
}
