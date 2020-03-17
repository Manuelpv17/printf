#include "holberton.h"

/**
 * print_stringCapital - Prints strings in capital letters
 * @_stringcapital: String to be printed - inside va_list
 * @buffer: Buffer where the characters to be print are save
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_stringCapital(va_list _stringcapital, char *buffer, int number)
{
	char *s = va_arg(_stringcapital, char *);
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			buffer[number] = s[i] - 32;
		else
			buffer[number] = s[i];
		number++;
	}
	return (number);
}
