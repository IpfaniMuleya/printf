#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct Specifier - format specifier and corresponding function
 * @specifier: format specifier character
 * @function: pointer to the function that handles the specifier
 */
typedef struct Specifier
{
	char specifier;
	int (*function)(va_list);
} Specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);

#endif
