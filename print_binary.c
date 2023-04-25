#include "main.h"

/**
 * print_binary - prints an unsigned int in binary
 * @args: the argument to print
 *
 * Return: the number of characters printed
 */

int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int veil = 0x80000000;
	int count = 0;
	int flag = 0;

	while (veil > 0)
	{
		if ((num & veil) == veil)
		{
			_putchar('1');
			count++;
			flag = 1;
		}
		else if ((flag == 1) || (veil == 1))
		{
			_putchar('0');
			count++;
		}
		veil = veil >> 1;
	}

	return (count);
}
