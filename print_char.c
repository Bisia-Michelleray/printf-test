#include "main.h"

/**
 * print_char - prints a char
 * @ch: arguments to be passed
 * format: character string
 *
 * Return: number of characters printed
 */

int print_char(va_list ch)
{
	char s;

	s = va_arg(ch, int);
	_putchar(s);
	return (1);
}
