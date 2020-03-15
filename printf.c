#include "holberton.h"

/**
 * _printf - Program used for formated printing.
 * @format: ------.
 * Return: ------.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i, j, char_number, total_char;

	char_number = 0;
	total_char = 0;
	conversion_specifiers specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
		{'u', print_unsignedInt},
		{'o', print_octal}};

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 7; j++)
			{
				if (specifiers[j].c_s == format[i])
				{
					char_number = specifiers[j].f(list);
					total_char = total_char + char_number;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			total_char++;
		}
	}
	va_end(list);
	return (total_char);
}
