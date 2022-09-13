#include "main.h"

/**
 * print_to_98 - functions that prints all natural numbers from n to 98
 *@n: parameter of the function
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				i = -i;
				_putchar('-');
			}
			if (i / 100 != 0)
			{
				_putchar(i / 100 + '0');
				_putchar(i / 10 + '0');
			}
			if ((i / 100 == 0) && (i / 10 != 0))
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
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
			if (i / 100 != 0)
			{
				_putchar(i / 100 + '0');
				_putchar(i / 10 + '0');
			}
			if ((i / 100 == 0) && (i / 10 != 0))
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
