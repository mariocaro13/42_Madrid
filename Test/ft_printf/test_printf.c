#include "../../ft_printf/ft_printf.h"
#include <stdio.h>

const char *color_red = "\033[1;31m";
const char *color_green = "\033[1;32m";
const char *color_blue = "\033[1;34m";
const char *color_default = "\033[0m";

/* This function just print some text and clean the stdout for correct printing
 * return (void);
 */
void	aux_text()
{
	printf("C: ");
	fflush(stdout);
}

/* This function print the output in STDIO 1 from comparing custom ft_printf to the orignial printf.
 * return (void);
 */
void	output(int original, int custom)
{
	if (original == custom)
		printf("%s%s\n\n", color_green, "It looks the same to me!!");
	else
		printf("%s%s\n\n", color_red, "something is wrong here.");
	printf("%s", color_default);
}

/* This function test CHAR comparing custom ft_printf to the orignial printf.
 * return (void);
 * Some good test could be:
 *      Normal char
 *      Char by ascci value
 *      Negative int value
 *      Escape valor
 *      NULL
 */
void	test_char(char c)
{
	int		original;
	int		custom;

	printf("%s%s%s", color_blue, "Testing CHAR: \n", color_default);
	printf("O: ");

	//Test here
	original = printf("%c", c);
	printf(". Out: %d. \n", original);
	
	aux_text();

	//Test Here
	custom = ft_printf("%c", c);
	printf(". Out: %d.\n", custom);
	output(original, custom);
}	

/* This function test STRING comparing custom ft_printf to the orignial printf.
 * return (void);
 * Some good test could be:
 *      Normal string
 *      NULL
 */
void	test_string(char *str)
{
	int	original;
	int	custom;
	printf("%s%s%s", color_blue, "Testing STRING: \n", color_default);
	printf("O: ");

	//Test here
	original = printf("%s", str);
	printf(". Out: %d. \n", original);

	aux_text();

	//Test here
	custom = ft_printf("%s", str);
	printf(". Out: %d.\n", custom);
	output(original, custom);
}

/* This function test CHAR AND STRING comparing custom ft_printf to the orignial printf.
 * return (void);
 * Some good test could be:
 *      Normal char + Noraml str
 *      Normal char + null
 *      NUll + str
 *      NULL + NULL
 */
void	test_char_string(char c, char *str)
{
	int	original;
	int	custom;
	printf("%s%s%s", color_blue, "Testing CHAR and STRING: \n", color_default);
	printf("O: ");

	//Test here
	original = printf("%c %s", c, str);
	printf(". Out: %d. \n", original);

	aux_text();

	//Test here
	custom = ft_printf("%c %s", c, str);
	printf(". Out: %d.\n", custom);
	output(original, custom);
}

/* This function test VOID POINTER comparing custom ft_printf to the orignial printf.
 * return (void);
 *  Some good test could be:
 *      Normal pointer
 *      NULL
 */
void    test_void_pointer(void *ptr)
{
	int     original;
	int     custom;
	printf("%s%s%s", color_blue, "Testing VOID POINTER: \n", color_default);
	printf("O: ");

	//Test here
	original = printf("%p", ptr);
	printf(". Out: %d. \n", original);

	aux_text();

	//Test here
	custom = ft_printf("%p", ptr);
	printf(". Out: %d.\n", custom);
	output(original, custom);
}

/* This function test 10 BASE DECIMAL comparing custom ft_printf to the orignial printf.
 * return (void);
 * Some good test could be:
 *      Normal int
 *      Negative int
 *      Max Integer
 *      MIN INteger
 *      MAX LONG
 *      MIN LONG
 */
void    test_decimal(int num)
{
	int     original;
	int     custom;
	printf("%s%s%s", color_blue, "Testing DECIMAL: \n", color_default);
	printf("O: ");

	//Test here
	original = printf("%d", num);
	printf(". Out: %d. \n", original);

	aux_text();

	//Test here
	custom = ft_printf("%d", num);
	printf(". Out: %d.\n", custom);
	output(original, custom);
}

/* This function test 10 BASE INTEGER comparing custom ft_printf to the orignial printf.
 * return (void);
 * Some good test could be:
 *      Normal int
 *      Negative int
 *      Max Integer
 *      MIN INteger
 *      MAX LONG
 *      MIN LONG
 */
void    test_integer(int num)
{
        int     original;
        int     custom;
        printf("%s%s%s", color_blue, "Testing INTEGER: \n", color_default);
        printf("O: ");

        //Test here
        original = printf("%i", num);
        printf(". Out: %d. \n", original);

        aux_text();

        //Test here
        custom = ft_printf("%i", num);
        printf(". Out: %d.\n", custom);
        output(original, custom);
}

/* This function test UNSIGNED DECIMAL comparing custom ft_printf to the orignial printf.
 * return (void);
 * Some good test could be:
 *	Normal int
 *	Negative int
 *	Max Integer
 *	MIN INteger
 *	MAX LONG
 *	MIN LONG
 */
void    test_unsigned(int num)
{
        int     original;
        int     custom;
        printf("%s%s%s", color_blue, "Testing UNSIGNED DECIMAL: \n", color_default);
        printf("O: ");

        //Test here
        original = printf("%u", num);
        printf(". Out: %d. \n", original);

        aux_text();

        //Test here
        custom = ft_printf("%u", num);
        printf(". Out: %d.\n", custom);
        output(original, custom);
}

/* This function test HEXADECIMAL LOWERCASE FORMAT comparing custom ft_printf to the orignial printf.
 * return (void);
 * Some good test could be:
 *      Normal int
 *      Negative int
 *      Max Integer
 *      MIN INteger
 *      MAX LONG
 *      MIN LONG
 */
void    test_hexadecimal_lower(int num)
{
        int     original;
        int     custom;
        printf("%s%s%s", color_blue, "Testing HEXADECIMAL LOWERCASE FORMAT: \n", color_default);
        printf("O: ");

        //Test here
        original = printf("%x", num);
        printf(". Out: %d. \n", original);

        aux_text();

        //Test here
        custom = ft_printf("%x", num);
        printf(". Out: %d.\n", custom);
        output(original, custom);
}

/* This function test HEXADECIMAL UPPECASE FORMAT comparing custom ft_printf to the orignial printf.
 * return (void);
 * Some good test could be:
 *      Normal int
 *      Negative int
 *      Max Integer
 *      MIN INteger
 *      MAX LONG
 *      MIN LONG
 */
void    test_hexadecimal_upper(int num)
{
        int     original;
        int     custom;
        printf("%s%s%s", color_blue, "Testing HEXADECIMAL UPPERCASE FORMAT: \n", color_default);
        printf("O: ");

        //Test here
        original = printf("%X", num);
        printf(". Out: %d. \n", original);

        aux_text();

        //Test here
        custom = ft_printf("%X", num);
        printf(". Out: %d.\n", custom);
        output(original, custom);
}

/* This function test PERCENT SIGN comparing custom ft_printf to the orignial printf.
 * return (void);
 */
void    test_percent_sign(void)
{
        int     original;
        int     custom;
        printf("%s%s%s", color_blue, "Testing PERCENT SIGN: \n", color_default);
        printf("O: ");

        //Test here
        original = printf("%%");
        printf(". Out: %d. \n", original);

        aux_text();

        //Test here
        custom = ft_printf("%%");
        printf(". Out: %d.\n", custom);
        output(original, custom);
}

/* This function test ESCAPE VALUES comparing custom ft_printf to the orignial printf.
 * return (void);
 * 	Some good test could be:
 * 	\n
 * 	\t
 * 	\"
 * 	\'
 * 	\\
 */
void    test_escape(char *str)
{
        int     original;
        int     custom;
        printf("%s%s%s", color_blue, "Testing ESCAPE VALUES: \n", color_default);
        printf("O: ");

        //Test here
        original = printf("\n%s", str);
        printf(". Out: %d. \n", original);

        aux_text();

        //Test here
        custom = ft_printf("\n%s", str);
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
	test_decimal(13);
	test_integer(-11);
	test_unsigned(-2002);
	test_hexadecimal_lower(-130000000);
	test_hexadecimal_upper(-130000000);
	test_percent_sign();
	test_escape("\n");
	return (0);
}
