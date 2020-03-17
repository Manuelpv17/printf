#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct conversion_specifiers - Struct for symbols and functions
 * @c_s: conversion specifier symbol
 * @f: conversion specifier function
 *
 * Description: Symbols and functions of conversion specifiers
 */
typedef struct conversion_specifiers
{
	char c_s;
	int (*f)(va_list);
} conversion_specif;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_stringCapital(va_list);
int print_int(va_list);
int print_binary(va_list);
int print_unsignedInt(va_list);
int print_unsignedInt(va_list);
int print_octal(va_list);
int print_hexadecimal(va_list);
int print_hexCapital(va_list);
int print_reverse(va_list);
int print_rot13(va_list);

int print_percentage(va_list);

#endif
