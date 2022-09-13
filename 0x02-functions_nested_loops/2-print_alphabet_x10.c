#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	int t;

	for (t = 1; t <= 10 ; t++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
