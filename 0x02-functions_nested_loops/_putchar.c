#include <stdio.h>
#include <string.h>

/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 *
 * Return: returns 1 on success and -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
