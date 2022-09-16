#include "main.h"
 /**
  * print_numbers - starting point of a fuction
  *
  * Description: the function prints digit numbers
  *
  * Return: returns nothing
  */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
