#include "main.h"

/**
 * _isdigit - starting point of a function
 *
 * @c: value to be checked
 *
 * Description: the function checks for a digit
 *
 * Return: returns 1 if true and 0 when false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
