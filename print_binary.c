#include "holberton.h"

void print_binary(va_list decToBin)
{
	unsigned int dec = va_arg(decToBin, unsigned int);

	int i, j;
	char bin[300];

	for (i = 0; dec != 0; i++)
	{
		bin[i] = (dec % 2) + '0';
		dec = dec / 2;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(bin[j]);
}