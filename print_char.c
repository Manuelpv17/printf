#include "holberton.h"

/**
 * print_char - Prints characters.
 * @_char: Char to be printed - inside va_list
 * Return: number of characters printed.
 */

int print_char(va_list _char)
{
	_putchar(va_arg(_char, int));
	return (1);
}
