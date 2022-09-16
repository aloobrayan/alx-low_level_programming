#include "main.h"

/**
 * print_diagonal - starting point of a function
 *
 * @n: value to be entered
 *
 * Description: the finction will print a diagonal line
 *
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int rows, numlines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= n; rows++)
		{
			if (rows > 1)
			{
				for (numlines = 1; numlines <= rows - 1; numlines++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
