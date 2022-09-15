#include "main.h"

/**
 * _abs - starting point of a function
 *
 * @n: the value to be converted
 *
 * Description: convert the value to absolute
 *
 * Return: returns the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
