#include <stdio.h>
/**
 * main - the starting point of a function
 *
 * Description: print the first 50 fibonacci numbers
 *
 * Return: 0 for success
 */

int main(void)
{
	unsigned long i, a, b, c;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
