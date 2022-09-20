#include "main,h"

/**
 * _strlen - function to calculate the length of a string
 *
 * @s: pointer to character array
 *
 * Return: return length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
