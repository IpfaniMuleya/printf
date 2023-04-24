#include "main.h"

/**
 * print_string - prints a string to the standard output stream
 * @args: variable-length argument list of type va_list
 *
 * Return: length of the string that was printed,
 * not including the terminating null character
 */

int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int length = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		length++;
	}

	return (length);
}
