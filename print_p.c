#include "main.h"

/**
 * print_p - Prints the address of a pointer in hexadecimal format.
 * @args: A va_list containing the pointer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_p(va_list args)
{
	unsigned long int p = va_arg(args, unsigned long int);
	int count = 0;

	count += _putchar('0');
	count += _putchar('x');
	count += print_hexa(p, 0, 'a');

	return (count);
}
