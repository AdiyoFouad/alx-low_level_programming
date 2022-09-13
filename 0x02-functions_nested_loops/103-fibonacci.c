#include <stdio.h>

/**
 * main - prints the sum of fibonacci terms
 *
 * Return 0
 */

int main(void)
{
	long int j, k, f, sum;

	j = 1;
	k = 2;
	sum = 0;
	do
	{
		f = j + k;
		sum += f;
		j = k;
		k = sum;
	}while (f <= 4000000);
	printf("%d", sum);
	return (0);
}