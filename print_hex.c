#include "main.h"

void print_hex_helper(unsigned int n, int *count, int uppercase);
/**
 * print_hex - prints an unsigned integer in base 16 using lowercase letters
 * @args: the argument to print
 *
 * Return: the number of digits printed
 */
int print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int copy = num, count = 0;

	do {
		count++;
		copy /= 16;
	} while (copy);

	print_hex_helper(num, 'a');

	return (count);
}

/**
 * print_hex_upper - prints an unsigned integer in base 16 using uppercase letters
 * @args: the argument to print
 *
 * Return: the number of digits printed
 */
int print_hex_upper(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int copy = num, count = 0;

	do {
		count++;
		copy /= 16;
	} while (copy);

	print_hex_helper(num, 'A');

	return (count);
}

/**
 * print_hex_helper - prints a hexadecimal number recursively
 * @n: the unsigned integer to print
 * @count: pointer to a counter variable
 * @uppercase: flag to print uppercase letters (1) or lowercase letters (0)
 *
 * Return: void
 */
void print_hex_helper(unsigned int n, int *count, int uppercase)
{
	if (n / 16)
		print_hex_helper(n / 16, count, uppercase);
	if (n % 16 < 10)
		*count += _putchar((n % 16) + '0');
	else if (uppercase)
		*count += _putchar((n % 16) - 10 + 'A');
	else
		*count += _putchar((n % 16) - 10 + 'a');
}
