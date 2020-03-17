#include "holberton.h"

conversion_specif definition(int i);

/**
 * _printf - Program used for formated printing.
 * @format: First argument of printf
 * Return: Number of caracters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, j, char_number = 0, total_char = 0, flag = 0, splen = 13;
	conversion_specif specifiers[13];

	va_start(list, format);

	if (format == NULL)
		return (-1);

	for (i = 0; i < splen; i++)
		specifiers[i] = definition(i);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			for (j = 0; j < splen; j++)
			{
				if (specifiers[j].c_s == format[i])
				{
					char_number = specifiers[j].f(list);
					total_char += char_number;
					flag = 1;
				}
			}
			if (flag == 0)
			{
				_putchar(format[i - 1]);
				_putchar(format[i]);
				total_char = total_char + 2;
			}
		}
		else
		{
			_putchar(format[i]);
			total_char++;
		}
		flag = 0;
	}
	va_end(list);
	return (total_char);
}

conversion_specif definition(int i)
{
	conversion_specif specifiers[] = {
	    {'c', print_char},
	    {'s', print_string},
	    {'i', print_int},
	    {'d', print_int},
	    {'b', print_binary},
	    {'u', print_unsignedInt},
	    {'o', print_octal},
	    {'x', print_hexadecimal},
	    {'X', print_hexCapital},
	    {'S', print_stringCapital},
	    {'r', print_reverse},
	    {'R', print_rot13},
	    {'%', print_percentage}};

	return (specifiers[i]);
}
