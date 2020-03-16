#include "holberton.h"

/**
 * print_binary - Converts a decimal number to binary and prints it.
 * @dectobin:----
 * Return: number of characters printed.
 */

int print_binary(va_list dectobin)
{
	unsigned int dec = va_arg(dectobin, unsigned int);

	int i, j, number;
	char bin[300];

	number = 0;

	for (i = 0; dec != 0; i++)
	{
		bin[i] = (dec % 2) + '0';
		dec = dec / 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(bin[j]);
		number++;
	}
	return (number);
}
