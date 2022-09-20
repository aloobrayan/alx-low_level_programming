#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print n elements of an array plus newline
 *
 * @a: input parameter
 *
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
