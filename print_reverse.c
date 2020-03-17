#include "holberton.h"

/**
 * print_reverse - Prints strings.
 * @_reverse: String to be printed in revers - inside va_list
 * Return: number of characters printed.
 */

int print_reverse(va_list _reverse)
{
	char *s = va_arg(_reverse, char *);
	int i, j, number;

	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
		number++;
	}
	return (number);
}
