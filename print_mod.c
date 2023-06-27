#include "main.h"

/**
 * print_mod - prints the conversion specifier %
 * @args: arguments passed
 *
 * Return: numbber of characters printed
 */

int print_mod(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
