# Printf project

## _printf ##

printf is the C language function to do formated printing.
It is used to print the “character, string, float, integer, octal and hexadecimal values” in stdout format.

_printf is based on version 3 of GNU printf.

## Syntax of the function ##

int _printf(const char *format, ...);

libraries needed for _printf to work:

stdarg.h

unistd.h

stdlib.h

holberton.h

## Format specifiers accepted: ##

* % -> percentage sign 
* c -> character
* s -> string
* d -> decimal
* i -> integer
* b -> decimal to binary
* u -> unsigned int
* o -> decimal to octal
* x -> decimal to hexadecimal
* X -> decimal to hexadecimal in CAPITAL LETTERS
* S -> (Custom) Non printable characters are printed  this way: \x, followed by the ASCII code value in hexadecimal
* p -> memory address
* r - string in reverse
* R - string to ROT13

Use case:


>_printf("%S\n", "Holberton School Medellin, cohort \v is awesome");


Output

> Holberton School Medellin, cohort \x0B is awesome


## Authors and contributors ##
* Manuel Puerta Villa
* Tomas Gomez Velez

