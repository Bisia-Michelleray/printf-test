#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - produces output according to a format
 * @spec: char pointer of the conversion specifiers
 * @f: type pointer to function for the conversion specifier
 */

typedef struct format
{
	char *spec;
	int (*f)(va_list);
} convert_func;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_spec(char c_sp, va_list args);
int print_char(va_list ch);
int print_str(va_list st);
int print_mod(va_list args);
int _puts(char *string);
int print_integer(va_list digit);
int print_decimal(va_list dec);

#endif
