#include "holberton.h"

/**
 * print_char - Prints characters.
 * @_char: Char to be printed - inside va_list
 * @buffer: Buffer where the characters to be print are save
 * @number: Position in the buffer
 * Return: number of characters printed.
 */

int print_char(va_list _char, int number)
{
	_buffer(va_arg(_char, int));
	return (number + 1);
}
