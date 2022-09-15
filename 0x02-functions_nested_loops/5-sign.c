#include "main.h"

/**
 * print_sign -starting point of a function
 *
 * @n: the value character
 *
 * Description: by using ASCII values to locate lower case
 *
 * Return: return 1 if true and 0 if false
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
