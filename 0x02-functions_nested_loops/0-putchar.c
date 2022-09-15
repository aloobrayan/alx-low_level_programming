#include "main.h"

/**
 * main - the staring point of a function
 * Description: the function prints _putchar
 * Return: Returns 0 for success
 */

int main(void)
{
	char source[] = "_putchar";
	int i;
	int len = strlen(source);

	for (i = 0; i < len; i++)
		_putchar(source[i]);
	_putchar('\n');

	return (0);
}
