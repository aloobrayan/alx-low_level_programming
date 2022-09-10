#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function starts here
 *
 * Return: 0 for successful compilation
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
