#include <stdlib.h>

/**
 * main - prints the 50 first fibonnacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int f;

	j = 1;
	k = 2;
	printf("%d, %d, ", j, k);
	for (i = 3; i <= 50; i++)
	{
		f = j + k;
		printf("%d", f);
		if (i != 50)
		{
			printf(", ");
		}
		j = k;
		k = f;
	}
	printf("\n");
	return (0);
}
