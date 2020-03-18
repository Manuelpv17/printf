#include "holberton.h"

/**
 * print_octal - Converts a decimal number to octal and prints it.
 * @dectooctal: Decimal number to be converted - inside va_list
 * @buffer: Buffer where the characters to be print are save
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_octal(va_list dectooctal, char *buffer, int number)
{
	unsigned int dec = va_arg(dectooctal, long unsigned int);

	int i, j;
	char oct[300];

	if (dec == 0)
	{
		buffer[number] = '0';
		return (number + 1);
	}

	for (i = 0; dec != 0; i++)
	{
		oct[i] = (dec % 8) + '0';
		dec = dec / 8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		buffer[number] = oct[j];
		number++;
	}
	return (number);
}
