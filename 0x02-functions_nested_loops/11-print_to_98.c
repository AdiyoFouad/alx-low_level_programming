#include "main.h"


/**
 * numberz - function that print number
 * @i: number to print
 * Return: void
 */

void numberz(int i)
{

	if (i / 100 != 0)
	{
		_putchar(i / 100 + '0');
		_putchar(((i % 100) / 10) + '0');
	}
	if ((i / 100 == 0) && (i / 10 != 0))
	{
		_putchar(i / 10 + '0');
	}
	_putchar(i % 10 + '0');
}

/**
 * print_to_98 - functions that prints all natural numbers from n to 98
 *@n: parameter of the function
 * Return: void
 */

void print_to_98(int n)
{
	int i;
	int m;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			m = i;
			if (i < 0)
			{
				m = -m;
				_putchar('-');
			}
			numberz(m);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			numberz(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

