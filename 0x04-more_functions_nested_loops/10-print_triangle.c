#include "main.h"

/**
 * print_triangle - starting point of a function
 *
 * @size: value entered
 *
 * Description: function will print straid line
 *
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int rows, hash, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (space = size - rows; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= rows; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
