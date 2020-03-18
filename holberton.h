#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
	int (*f)(va_list, char *, int);
} conversion_specif;

int _printf(const char *format, ...);

int print_char(va_list, char *, int);
int print_string(va_list, char *, int);
int print_custom_s(va_list, char *, int);
int print_int(va_list, char *, int);
int print_binary(va_list, char *, int);
int print_unsignedInt(va_list, char *, int);
int print_unsignedInt(va_list, char *, int);
int print_octal(va_list, char *, int);
int print_hexadecimal(va_list, char *, int);
int print_hexCapital(va_list, char *, int);
int print_reverse(va_list, char *, int);
int print_rot13(va_list, char *, int);

int print_percentage(va_list, char *, int);

#endif
