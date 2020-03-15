#include "holberton.h"

void print_char(va_list _char)
{
	_putchar(va_arg(_char, int));
}
