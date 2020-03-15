#include "holberton.h"

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