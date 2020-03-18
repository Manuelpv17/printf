#include "holberton.h"

/**
 * print_hexadecimal - Converts a decimal number to hexadesimal and prints it.
 * @dectohex: Decimal number to be converted - inside va_list
 * @buffer: Buffer where the characters to be print are save
 * @number: Position in the buffer
 * Return: number of characters printed.
 */
int print_hexadecimal(va_list dectohex, char *buffer, int number)
{
	unsigned int dec = va_arg(dectohex, long unsigned int);

	unsigned int temp;
	int i, j;
	char hex[300];

	if (dec == 0)
	{
		buffer[number] = '0';
		return (number + 1);
	}

	for (i = 0; dec != 0; i++)
	{
		temp = 0;
		temp = dec % 16;
		if (temp < 10)
			hex[i] = temp + 48;
		else
			hex[i] = temp + 87;
		dec = dec / 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		buffer[number] = hex[j];
		number++;
	}
	return (number);
}
