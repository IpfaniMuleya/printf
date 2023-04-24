#include "main.h"
/**
 * print_char - prints a sinle character to the standard output stream
 * @args: list containing the character to print
 *
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
