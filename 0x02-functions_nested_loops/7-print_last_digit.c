#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @n: the number for which we want print the last digit
 * Return: the value of the last digit of n
 *
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = (n % 10) * -1;
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
}
