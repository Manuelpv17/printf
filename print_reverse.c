#include "holberton.h"

/**
 * print_reverse - Prints strings.
 * @_reverse: String to be printed in revers - inside va_list
 * @buffer: Buffer where the characters to be print are save
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_reverse(va_list _reverse, char *buffer, int number)
{
	char *s = va_arg(_reverse, char *);
	int i, j;
	char nu[7] = "(null)";

	if (s == NULL)
	{
		for (i = 0; i < 6; i++)
		{
			buffer[number] = nu[i];
			number++;
		}
		return (number);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = i - 1; j >= 0; j--)
	{
		buffer[number] = s[j];
		number++;
	}
	return (number);
}
