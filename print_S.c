#include "main.h"

int print_hexa_helper(unsigned int n, int uppercase);

/**
 * print_S - prints a string with non-printable characters
 * as \x followed by their ASCII code in hex
 * @args: the va_list containing the string to print
 *
 * Return: the number of characters printed
 */

int print_S(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count = 0;

	if (str == NULL)
		str = ("null");

	for (i = 0; str[i]; i++)
	{
		if ((str[i] < 32) || (str[i] >= 127))
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_hexa_helper(str[i], 'A');
		}
		else if (str[i] == '\n')
		{
			count += _putchar('\\');
			count += _putchar('n');
		}
		else
		{
			count += _putchar(str[i]);
		}
	}
	return (count);
}

/**
 * print_hex_helper - recursively prints an unsigned int as hexadecimal
 * @n: the unsigned int to print
 * @uppercase: whether to print the letters in
 * uppercase (1) or lowercase (0)
 *
 * Return: the number of digits printed
 */

int print_hexa_helper(unsigned int n, int uppercase)
{
	char hex_digits[16] = "0123456789abcdef";
	int count = 0;

	hex_digits[10] = 'A', hex_digits[11] = 'B', hex_digits[12] = 'C',
	hex_digits[13] = 'D', hex_digits[14] = 'E', hex_digits[15] = 'F';

	if (n > 0xf)
	{
		count += print_hexa_helper(n >> 4, uppercase);
	}
	count += _putchar(hex_digits[n % 16]);
	return (count);
}
