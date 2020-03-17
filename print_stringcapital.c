#include "holberton.h"

/**
 * print_stringCapital - Prints strings in capital letters
 * @_stringcapital: String to be printed - inside va_list
 * Return: number of characters printed.
 */

int print_stringCapital(va_list _stringcapital)
{
	char *s = va_arg(_stringcapital, char *);
	int i, number;

	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			_putchar(s[i] - 32);
		else
			_putchar(s[i]);
		number++;
	}
	return (number);
}
