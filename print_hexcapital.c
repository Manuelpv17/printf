#include "holberton.h"

/**
 * print_hexCapital - Converts a decimal number to HEXADECIMAL and prints it.
 * @dectooctal:---
 * Return: number of characters printed.
 */

int print_hexCapital(va_list dectohex)
{
	unsigned int dec = va_arg(dectohex, unsigned int);

	int i, j, temp, number;
	char hex[300];

	number = 0;

	for (i = 0; dec != 0; i++)
	{
		temp = 0;
		temp = dec % 16;
		if (temp < 10)
			hex[i] = temp + 48;
		else
			hex[i] = temp + 55;
		dec = dec / 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex[j]);
		number++;
	}
	return (number);
}
