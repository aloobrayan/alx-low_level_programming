#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: 0 on successful compilation
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + 'o');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
