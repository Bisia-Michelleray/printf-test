#include "main.h"

/**
 * print_decimal - prints a decimal which is a digit
 * @dec: arguments to be passed
 *
 * Return: number of characters printed
 */

int print_decimal(va_list dec)
{
	int a = va_arg(dec, int);
	int i, actual;
	int rem = a % 10;
	int output = 1;
	int wh_num;

	i = 1;
	a = a / 10;
	actual = a;
	if (rem > 0)
	{
		while (actual / 10 != 0)
		{
			output = output * 10;
			actual = actual / 10;
		}
		actual = a;
		while (output > 0)
		{
			wh_num = actual / output;
			_putchar(actual + '0');
			actual -= (wh_num * output);
			output = output / 10;
			i++;
		}
		if (rem < 0)
		{
			_putchar('-');
			actual = -actual;
			a = -a;
			rem = -rem;
			i++;
		}
	}
	_putchar(rem + '0');
	return (i);
}
