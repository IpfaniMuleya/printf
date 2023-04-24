#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string composed of zero or more directives
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args, format);

	Specifier specifiers[] = {
		{'c', print_char}, {'s', print_string}
	}

	int num_specifiers = sizeof(specifiers) / sizeof(Specifier);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			int i;

			for (i = 0; i < num_specifiers; i++)
			{
				if (specifiers[i].specifier == *format)
				{
					counter += specifiers[i].function(args);
					break;
				}
			}

			if (i == num_specifiers)
			{
				_putchar('%');
				_putchar(*format);
				counter += 2;
			}
		}
		else
		{
			_putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(args);
	return (counter);
}
