#include "main.h"
#include <stdio.h>

/**
 * main - function to print number of arguments
 * @argc: number of command line arguments
 * @argv: array name
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int j;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (j = 0; *argv; j++; argv++)
			;
		printf("%d\n", j - 1);
	}
	return (0);
}
