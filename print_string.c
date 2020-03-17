#include "holberton.h"

/**
 * print_string - Prints strings.
 * @_string: String to be printed - inside va_list
 * Return: number of characters printed.
 */

int print_string(va_list _string)
{
	char *s = va_arg(_string, char *);
	int i, number;

	number = 0;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		number++;
	}
	return (number);
}
