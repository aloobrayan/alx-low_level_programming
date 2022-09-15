#include "main.h"

/**
 * print_alphabet - starting point of a function
 *
 * Description: the function prints alphabet in lower case
 *
 * Return: returns nothing
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
