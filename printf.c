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
	int i, j, total_char = 0, flag = 0, splen = 13;
	conversion_specif specifiers[13];
	char *buffer;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	for (i = 0; i < splen; i++)
		specifiers[i] = definition(i);

	buffer = malloc(sizeof(char) * 5024);
	if (buffer == NULL)
		return (-1);

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
					total_char = specifiers[j].f(list, buffer, total_char);
					flag = 1;
				}
			}
			if (flag == 0)
			{
				buffer[total_char] = format[i - 1];
				buffer[total_char + 1] = format[i];
				total_char = total_char + 2;
			}
		}
		else
		{
			buffer[total_char] = format[i];
			total_char++;
		}
		flag = 0;
	}

	write(1, buffer, total_char);
	va_end(list);
	free(buffer);
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
		{'S', print_custom_s},
		{'r', print_reverse},
		{'R', print_rot13},
		{'%', print_percentage}};

	return (specifiers[i]);
}
