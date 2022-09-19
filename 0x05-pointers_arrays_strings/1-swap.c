#include "main.h"

/**
 * swap_int - function to swap value of two integers
 *
 * @a: first int for swapping
 *
 * @b: second integer for swapping
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
