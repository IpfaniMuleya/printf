#include "main.h"

int print_decimal_helper(unsigned int n);

/**
 * print_decimal - prints decimal and integer to stdout
 * @args: the argument decimal
 *
 * Return: the number of characters printed
 */

int print_decimal(va_list args)
{
	int value, count = 0;
	unsigned int abs_value;

	value = va_arg(args, int);
	abs_value = value < 0 ? -value : value;

	if (value < 0)
		count += _putchar('-');

	if (abs_value / 10)
		count += print_decimal_helper(abs_value / 10);

	count += _putchar((abs_value % 10) + '0');

	return (count);
}

/**
 * print_decimal_helper - prints decimal helper
 * @n: the number to be printed
 *
 * Return: the number of characters printed
 */

int print_decimal_helper(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_decimal_helper(n / 10);

	count += _putchar((n % 10) + '0');

	return (count);
}
