#include "main.h"

/**
 * print_string - prints a string to the standard output stream
 * @args: list of type va_list containing the string to print
 *
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int length = 0;

	if (!s)
		s = "(null)";

	while (*s)
	{
		length += _putchar(*s);
		s++;
	}

	return (length);
}
