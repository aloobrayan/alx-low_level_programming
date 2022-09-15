#include "main.h"

/**
 * _isalpha - starting point of a function
 *
 * @c: the value character
 *
 * Description: by using ASCII values to locate alphabets
 *
 * Return: return 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
