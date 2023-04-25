#include "main.h"

/**
 * _printf - print formatted output to stdout
 * @format: pointer to a string containing format specifiers
 *
 * Return: number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int i, j;

	print_specifier_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_decimal},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_hex_upper},
		{"S", print_S},
		{"p", print_p},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; specifiers[j].specifier; j++)
			{
				if (format[i + 1] == *(specifiers[j].specifier))
				{
					count += specifiers[j].f(args);
					i++;
					break;
				}
			}
			if (!specifiers[j].specifier)
			{
				count += _putchar('%');
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
	}

	va_end(args);

	return (count);
}
