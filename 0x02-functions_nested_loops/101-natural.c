#include <stdio.h>

/**
 * main - starting function
 *
 * Description: the function prints alphabets in lower case
 *
 * Return: returns 0 for success
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
