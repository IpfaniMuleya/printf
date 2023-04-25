#include "main.h"

int print_octal_helper(unsigned int num);
/**
 * print_octal - prints an unsigned integer in base 8
 * @args: the argument to print
 *
 * Return: the number of digits printed
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int copy = num, count = 0;

	do {
		count++;
		copy /= 8;
	} while (copy);

	print_octal_helper(num);

	return (count);
}

/**
 * print_octal_helper - helper function to recursively print octal numbers
 * @num: the octal number to print
 *
 * Return: the number of digits printed
 */
int print_octal_helper(unsigned int num)
{
	int count = 0;

	if (num / 8)
		count += print_octal_helper(num / 8);

	count += _putchar(num % 8 + '0');
	return (count);
}
