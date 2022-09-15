#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
*/

void print_number(int n)
{
	unsigned int n1;
	
	if (n < 0)
	{
		n1 = 0 - n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 > 9)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
