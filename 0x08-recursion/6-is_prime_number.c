#include "main.h"
#include <stdio.h>

/**
 * prime_check check if number id prime number
 * @n: iterant
 * @base: base number to check
 * Return: Always 1
 */
int prime_check(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (prime_check(n + 1, base));
	return (1);
}
/**
 * is_prime_number - check if number is prime
 * @n: number to be checked
 * Return: Always 1
 */
int is_prime_number(int n)
{
	return (prime_check(2, n));
}
