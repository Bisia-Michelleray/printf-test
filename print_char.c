#include "main.h"

/**
 * print_char - prints a char
 * @ch: arguments to be passed
 *
 * Return: number of characters printed
 */

int print_char(va_list ch)
{

	_putchar(va_arg(ch, int));
	return (1);
}
