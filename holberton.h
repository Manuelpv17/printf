#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

typedef struct conversion_specifiers
{
	char c_s;
	void (*f)(va_list);
} conversion_specifiers;

int _putchar(char c);
int _printf(const char *format, ...);
void print_char(va_list);
void print_string(va_list);
void print_stringCapital(va_list);
void print_int(va_list);
void print_binary(va_list);
void print_unsignedInt(va_list);
void print_unsignedInt(va_list);
void print_octal(va_list);
void print_hexadecimal(va_list);
void print_hexCapital(va_list);

#endif
