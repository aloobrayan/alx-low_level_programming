#include "main.h"

/**
 * _islower - starting point of a function
 *
 * @c: the value character
 *
 * Description: by using the ASCII values to locate lower case
 *
 * Return: return 1 if true and 0 if false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
