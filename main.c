#include "holberton.h"
#include <stdio.h>

int main(void)
{
	unsigned int a = 1234567;

	char h[] = "hello";
	printf("Hel/l?o %i %c Hello %s %d j\n", -102034, 'h', h, 23);
	_printf("Hel/l?o %i %c Hello %s %d j\n", -102034, 'h', h, 23);

	_printf("%b\n", 98);

	printf("hola %u g\n", a);
	_printf("hola %u g\n", a);

	return (0);
}