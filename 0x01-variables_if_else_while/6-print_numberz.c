#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 for successful compilation
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
