#include "main.h"
/**
 * _isupper - Fustino start point
 *
 * @c: The character to be checked
 *
 * Return: returns 1 if true and -1 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
