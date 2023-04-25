#include "main.h"

void print_unsigned_helper(unsigned int n, int *count);
/**
 * print_unsigned - prints an unsigned integer in base 10
 * @args: the argument to print
 *
 * Return: the number of digits printed
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int copy = num;
	int count = 0;

	do {
		count++;
		copy /= 10;
	} while (copy);

	print_unsigned_helper(num, &count);

	return (count);
}

/**
 * print_unsigned_helper - prints an unsigned integer recursively
 * @n: the unsigned integer to print
 * @count: pointer to a counter variable
 *
 * Return: void
 */
void print_unsigned_helper(unsigned int n, int *count)
{
	if (n / 10)
		print_unsigned_helper(n / 10, count);
	*count += _putchar((n % 10) + '0');
}
