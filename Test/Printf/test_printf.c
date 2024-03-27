#include "../../Printf/ft_printf.h"
#include <stdio.h>

const char *color_red = "\033[1;31m";
const char *color_green = "\033[1;32m";
const char *color_blue = "\033[1;34m";
const char *color_default = "\033[0m";

void	text()
{
	printf("C: ");
	fflush(stdout);
}

void	output(int original, int custom)
{
	if (original == custom)
		printf("%s%s\n\n", color_green, "It looks the same to me!!");
	else
		printf("%s%s\n\n", color_red, "something is wrong here.");
	printf("%s", color_default);
}

void	test_char(char c)
{
	int		original;
	int		custom;

	printf("%s%s%s", color_blue, "Testing CHAR: \n", color_default);
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

void	test_string(char *str)
{
	int	original;
	int	custom;
	printf("%s%s%s", color_blue, "Testing STRING: \n", color_default);
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


void	test_char_string(char c, char *str)
{
	int	original;
	int	custom;
	printf("%s%s%s", color_blue, "Testing CHAR and STRING: \n", color_default);
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

void    test_void_pointer(void *ptr)
{
        int     original;
        int     custom;
        printf("%s%s%s", color_blue, "Testing VOID POINTER: \n", color_default);
        printf("O: ");

        //Test here
        original = printf("%p", ptr);
        printf(". Out: %d. \n", original);

        text();

        //Test here
        custom = ft_printf("%p", ptr);
        printf(". Out: %d.\n", custom);
        output(original, custom);
}

int	main (void)
{
	int	void_ptr;

	printf("\n%s%s\n", color_blue, "Running mcaro-ro test for printf.");
	printf("%s\n", "O -> Original function.");
	printf("%s\n\n%s", "C -> Custom function.", color_default);

	test_char('c');
	test_string(NULL);
	test_char_string('c', "I am a string");
	test_void_pointer((void *)&void_ptr);
	return (0);
}
