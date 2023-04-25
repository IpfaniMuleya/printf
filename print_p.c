#include "main.h"

/**
 * print_p - Prints the address of a pointer in hexadecimal format.
 * @args: A va_list containing the pointer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_p(va_list args)
{
	unsigned long int p = (unsigned long int)va_arg(args, void *);

	return (print_hexa_helper(p, 0, 'a') = 2);
}
