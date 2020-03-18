#include "holberton.h"

/**
 * print_custom_s - Prints a custom string.
 * @_string: String to be printed - inside va_list
 * @buffer: Buffer where the characters to be print are save
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_custom_s(va_list _string, char *buffer, int number)
{
	char *s = NULL;
	unsigned int dec, temp;
	int i, j, h;
	char nu[7] = "(null)";
	char hex[20];

	s = va_arg(_string, char *);
	if (s == NULL)
	{
		for (i = 0; i < 6; i++)
			buffer[number++] = nu[i];
		return (number);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 0 && s[i] <= 31) || (s[i] >= 127))
		{
			buffer[number++] = '\\';
			buffer[number++] = 'x';
			dec = s[i] - 0;
			if (dec <= 15)
				buffer[number++] = '0';
			for (h = 0; dec != 0; h++)
			{
				temp = 0;
				temp = dec % 16;
				if (temp < 10)
					hex[h] = temp + 48;
				else
					hex[h] = temp + 55;
				dec = dec / 16;
			}
			for (j = h - 1; j >= 0; j--)
				buffer[number++] = hex[j];
		}
		else
			buffer[number++] = s[i];
	}
	return (number);
}
