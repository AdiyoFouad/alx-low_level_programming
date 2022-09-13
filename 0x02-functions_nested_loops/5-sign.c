#include "main.h"

/**
 * print_sign - funtion that prints the sign of a number
 * @n: the number for which we want print the sign
 * Return: 1 if n is positive, -1 if n is negative and 0 is n equals 0
 *
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
