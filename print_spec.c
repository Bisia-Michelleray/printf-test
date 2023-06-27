#include "main.h"

/**
 * handle_spec - function specifiers.
 * @c_s: conversion specifiers to hanlde
 * @args: arguments to be passed
 *
 * Return: number of character printed
 */

int handle_spec(char c_s, va_list args)
{
	int i = 0;
	int value = 0;

	convert_func m[] = {
		{"c", print_char},
		{"s", print_str},
		{"%%", print_mod},
		{"d", print_decimal},
		{"i", print_integer},
	};

	while (m[i].spec)
	{
		if (c_s == *m[i].spec)
			value = value + m[i].f(args);
		i++;
	}

	if (value == 0)
	{
		value = value + _putchar('%');
		value = value + _putchar(c_s);
	}
	return (value);
}
