#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{

		 int value;
		 int tmp = 0;
		 int i = 0;

		 va_list args;

		 va_start(args, format);
		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
			return (-1);
		if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
			return (-1);
		while (format[i])
		{
			value = 0;
			if (format[i] == '%')
			{
				if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
				{
					tmp = -1;
					break;
				}
				value = value + handle_spec(format[i + 1], args);
				if (value == 0)
					tmp = tmp + _putchar(format[i + 1]);
				if (value == -1)
					tmp = -1;
				i++;
			}
			else
			{
				(tmp == -1) ? (_putchar(format[i])) : (tmp += _putchar(format[i]));
			}
			i++;
			if (tmp != -1)
				tmp = tmp + value;
		}
		va_end(args);
		return (tmp);
}
