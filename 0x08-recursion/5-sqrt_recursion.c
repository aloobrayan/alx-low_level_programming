#include "main.h"

/**
 * _squareroot - returns squareroot
 *
 * @n: integer parameter
 * @i: tested value
 *
 * Return: sqrt
 */

int _squareroot(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{

		return (i);
	}
	return (_squareroot(n, i + 1));
}
/**
 * _sqrt_recursion - return sqrt
 *
 * @n: number
 *
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	return (_squareroot(n, 1));
}
