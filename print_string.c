#include "holberton.h"

void print_string(va_list _string)
{
	char *s = va_arg(_string, char *);
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
