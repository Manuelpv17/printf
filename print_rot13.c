#include "holberton.h"

/**
 * print_rot13 - Prints strings in rot13.
 * @_string:----
 * Return: number of characters printed.
 */

int print_rot13(va_list _string)
{
	char *s = va_arg(_string, char *);
	int i, j, number;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (input[j] == s[i])
			{
				_putchar(output[j]);
				number++;
				break;
			}
		}
		if (input[j] != s[i])
		{
			_putchar(s[i]);
			number++;
		}
	}
	return (number);
}
