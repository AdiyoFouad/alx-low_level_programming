#include <stdio.h>

/**
 * main - main function that print the sum of all the multiples of 3 and 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += sum;
	}
	printf("%d\n", sum);
	return (0);
}
