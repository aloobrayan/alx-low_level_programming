#include "main.h"

/**
 * _puts - function to print followed by a new line
 *
 * @str: declaration of *str and parameters for the function _puts
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

