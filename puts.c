#include "main.h"

/**
 * _puts - prints a string in addition to a new line
 * @string: string to print
 *
 * Return: -1 or output string
 */

int _puts(char *string)
{
	int counter;

	counter = 0;
	while (*string)
	{
		_putchar(*string);

			string++;
		counter++;
	}
	return (counter);
}
