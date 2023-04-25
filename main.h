#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print_specifier - struct for printf specifier
 * @specifier: the format specifier
 * @f: pointer to the function to handle specifier
 */
typedef struct print_specifier
{
	char *specifier;
	int (*f)(va_list);
} print_specifier_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_hex_upper(va_list args);
int print_S(va_list args);

#endif
