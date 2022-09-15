#include "main.h"

/**
 * print_triangle - function that draws a triangle on the terminal
 * @size: size of te square
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	i = 1;
	j = 1;
	if (size > 0)
	{
		while (i <= size)
		{
			while (j <= size - i)
			{
				_putchar(' ');
				j++;
			}
			j = 1;
			while (j <= i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
