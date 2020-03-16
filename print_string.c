#include "holberton.h"

/**
 * print_string - Prints strings.
 * @_string:----
 * Return: number of characters printed.
 */

int print_string(va_list _string)
{
	char *s = va_arg(_string, char *);
	int i, number;

	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		number++;
	}
	return (number);
}
