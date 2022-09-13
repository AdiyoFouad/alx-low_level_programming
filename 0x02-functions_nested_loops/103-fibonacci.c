#include <stdio.h>

/**
 * main - prints the sum of fibonacci terms
 *
 * Return: 0
 */

int main(void)
{
	long int j, k, f, sum;

	j = 1;
	k = 2;
	f = 0;
	sum = 0;
	while (f <= 4000000)
	{
		f = j + k;
		sum += f;
		j = k;
		k = sum;
	}
	printf("%ld\n", sum);
	return (0);
}
