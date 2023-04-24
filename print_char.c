#include "main.h"
/**
 * print_char - prints a sinle character to the standard output stream
 * @args: variable length argument list of type va_list
 *
 * Return: 1 when successful
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (1);
}
