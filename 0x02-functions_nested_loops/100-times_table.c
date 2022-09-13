#include "main.h"

/**
 * number - function that print number
 * @i: number to print
 * Return: void
 */

void number(int i)
{
	if (i / 100 != 0)
	{
		_putchar(i / 100 + '0');
		_putchar(((i % 100) / 10) + '0');
	}
	else
	{
		_putchar(' ');
		if (i / 10 == 0)
		{
			_putchar(' ');
		}
		else
		{
			_putchar(i / 10 + '0');
		}
	}
	_putchar(i % 10 + '0');
}

/**
 * print_times_table - function that print the n times table, starting with 0
 *@num: the paramater of the function
 * Return: void
 */

void print_times_table(int num)
{
	int n;
	int t;
	int m;

	if (num < 0 || num > 15)
	{
		return;
	}
	if (num == 0)
	{
		_putchar(48);
		_putchar('\n');
		return;
	}
	for (n = 0; n <= num; n++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (t = 1; t <= num; t++)
		{
			m = n * t;
			number(m);
			if (t != num)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

