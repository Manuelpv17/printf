#include "holberton.h"

void print_char(va_list _char)
{
	_putchar(va_arg(_char, int));
}

void print_string(va_list _string)
{
	char *s = va_arg(_string, char *);
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}

/**
 * print_number - Print
 * @n: Integer to print
 *
 */
void print_int(va_list _integer)
{
	int n, i, j;
	unsigned int n1;
	int z = 1;

	n = va_arg(_integer, int);

	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	n1 = n;

	for (i = 0; n / 10 != 0; i++)
	{
		n = n / 10;
	}
	for (j = 0; j <= i - 1; j++)
	{
		z = z * 10;
	}

	for (; z != 0;)
	{
		_putchar((n1 / z) + '0');
		n1 = n1 % z;
		z = z / 10;
	}
}

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

void print_unsignedInt(va_list _unsignedinteger)
{
	unsigned int n, i, j;
	unsigned int n1;
	unsigned int z = 1;

	n = va_arg(_unsignedinteger, unsigned int);

	n1 = n;

	for (i = 0; n / 10 != 0; i++)
	{
		n = n / 10;
	}
	for (j = 0; j <= i - 1; j++)
	{
		z = z * 10;
	}

	for (; z != 0;)
	{
		_putchar((n1 / z) + '0');
		n1 = n1 % z;
		z = z / 10;
	}
}