#include "holberton.h"

/**
 * _printf - Program used for formated printing.
 * @format: ------.
 * Return: ------.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i, j;
	conversion_specifiers specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
		{'u', print_unsignedInt}};

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 5; j++)
			{
				if (specifiers[j].c_s == format[i])
				{
					specifiers[j].f(list);
				}
			}
		}
		else
		{
			_putchar(format[i]);
		}
	}

	va_end(list);

	return (0);
}
