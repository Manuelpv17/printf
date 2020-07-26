#include "holberton.h"

/**
* buffer - saves characters to a buffer and writes the character c to stdout when full
* @c: The character to save and print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _buffer(char c)
{
	/**
	buffer = malloc(sizeof(char) * 5024);
	if (buffer == NULL)
		return (-1);
	*/
	return (write(1, &c, 1));
}
