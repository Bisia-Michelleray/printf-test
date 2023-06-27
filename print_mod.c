#include "main.h"

/**
 * print_mod - prints the conversion specifier %
 * @mod: conversion specifier modulus operator
 *
 * Return: numbber of characters printed
 */

int print_mod(va_list mod)
{
	(void)mod;
	_putchar('%');
	return (1);
}
