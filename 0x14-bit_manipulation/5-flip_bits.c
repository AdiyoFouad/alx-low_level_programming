#include "main.h"


/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, check;
	unsigned int c, i;

	c = 0;
	check = 1;
	d = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (d & check))
			c++;
		check <<= 1;
	}
	return (c);
}
