#include "main.h"

/**
 * _strncpy - C function to copy string
 * @dest: buffer storing the copied string
 * @src: source string
 * @n: maximum number of bytes copied
 * Return: return 0 always
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
