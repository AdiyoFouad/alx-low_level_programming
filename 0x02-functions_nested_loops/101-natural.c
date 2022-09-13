#include "main.h"

/**
 * main - main function that print the sum of all the multiples of 3 and 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	int i;
	int m;
	int c;
	int d;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += sum;
	}
	m = sum / 1000;
	c = sum % 1000;
	d = c % 100;
	_putchar(m + '0');
	_putchar(c / 100 + '0');
	_putchar(d / 10 + '0');
	_putchar(d % 10 + '0');
	return (0);
}
