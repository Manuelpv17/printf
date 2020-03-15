#include "holberton.h"

/**
 * print_octal - Converts a decimal number to octal and prints it.
 * @dectooctal:---
 * Return: number of characters printed.
 */

int print_octal(va_list dectooctal)
{
	unsigned int dec = va_arg(dectooctal, unsigned int);

	int i, j, number;
	char oct[300];

	number = 0;

	for (i = 0; oct[i] != 0; i++)
	{
		oct[i] = (dec % 8) + '0';
		dec = dec / 8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(oct[j]);
		number++;
	}
	return (number);
}
