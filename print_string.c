#include "holberton.h"

/**
 * print_string - Prints strings.
 * @_string: String to be printed - inside va_list
 * @buffer: Buffer where the characters to be print are save
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_string(va_list _string, char *buffer, int number)
{
	char *s = va_arg(_string, char *);
	int i;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		buffer[number] = s[i];
		number++;
	}
	return (number);
}
